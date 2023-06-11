--1. Menampilkan view partai apa saja yang terdapat pada tabel president.--

CREATE VIEW vPARTY
AS
SELECT DISTINCT PARTY AS Party
FROM PRESIDENT

SELECT * FROM vPARTY


--2. Menampilkan view total president dari masing-masing partai , diurutkan berdasarkan Jumlah Presiden.--

CREATE VIEW vPRESIDENT
AS
SELECT DISTINCT PARTY AS Party, COUNT (PARTY) AS JumlahPresiden
FROM PRESIDENT
GROUP BY PARTY

SELECT *
FROM vPRESIDENT
ORDER BY JumlahPresiden DESC

--3. Menampilkan view presiden yang mengabdi lebih dari 5 Tahun dan tahun kelahiran 1881 ke atas, dan diurutkan berdasarkan tahun kematian.--

CREATE VIEW vPENGABDIAN
AS
SELECT PRES_NAME AS Pres_Name, BIRTH_YR, YRS_SERV
FROM PRESIDENT
WHERE YRS_SERV > 5
AND BIRTH_YR > 1881

SELECT * FROM vPENGABDIAN
ORDER BY YRS_SERV DESC

--4. Menampilkan view state apa saja yang tidak pernah menjadi tempat kelahiran presiden.--

CREATE VIEW vSTATE
AS
SELECT STATE_NAME AS StateBukanKelahiran
FROM STATE 
WHERE STATE_NAME NOT IN (SELECT STATE_BORN FROM PRESIDENT)

SELECT* FROM vSTATE

--5. Menampilkan view state kelahiran dan total presiden yang lahir di state tersebut. 
--Tampilkan hanya state yang memiliki presiden lebih besar dari 1 dan diurutkan berdasarkan Jumlah Presiden.--
CREATE VIEW vBORN
AS
SELECT STATE_NAME AS state_name, COUNT(STATE_BORN) AS TotalPresiden
FROM PRESIDENT INNER JOIN STATE
ON STATE_BORN = STATE_NAME
GROUP BY STATE_NAME
HAVING COUNT(STATE_BORN) > 1

SELECT * FROM vBORN
ORDER BY TotalPresiden DESC

--6. Menampilkan view Nama Presiden dengan hobby “Riding” dan sudah memiliki anak.--

CREATE VIEW vHOBBY
AS
SELECT DISTINCT PRES_MARRIAGE.PRES_NAME
FROM PRES_MARRIAGE
INNER JOIN PRES_HOBBY
ON PRES_MARRIAGE.PRES_NAME = PRES_HOBBY.PRES_NAME 
WHERE PRES_HOBBY.HOBBY = 'Riding'
AND PRES_MARRIAGE.NR_CHILDREN > 0

SELECT * FROM vHOBBY

--7. Menampilkan view umur Presiden yang belum meninggal dan sudah memiliki anak.--

CREATE VIEW vDEATH
AS
SELECT DISTINCT PRESIDENT.PRES_NAME, 2021-PRESIDENT.BIRTH_YR AS Usia 
FROM PRESIDENT 
INNER JOIN PRES_MARRIAGE 
ON PRESIDENT.PRES_NAME = PRES_MARRIAGE.PRES_NAME
WHERE PRES_MARRIAGE.NR_CHILDREN > 0 
AND PRESIDENT.DEATH_AGE IS NULL

SELECT * FROM vDEATH

--8. Menampilkan view presiden yang meninggal pada usia 66 tahun.--

CREATE VIEW vAGE
AS
SELECT * FROM PRESIDENT
WHERE DEATH_AGE = 66

SELECT * FROM vAGE

--9. Menampilkan view kandidat yang menang pada tahun 1852.--

CREATE VIEW vCANDIDATE
AS
SELECT CANDIDATE, ELECTION_YEAR
FROM ELECTION
WHERE WINNER_LOSER_INDIC = 'W'
AND ELECTION_YEAR = 1852

SELECT * FROM vCANDIDATE

--10. Menampilkan view jumlah votes tertinggi (dengan votes > 450)setiap tahun, dimana WINNER_LOSER_INDIC='W'.--

CREATE VIEW vVOTES
AS
SELECT ELECTION_YEAR AS election_year, SUM(VOTES) AS JlhVote
FROM ELECTION
WHERE WINNER_LOSER_INDIC = 'W'
AND VOTES > 450
GROUP BY ELECTION_YEAR

SELECT * FROM vVOTES

--Identify view that you create in point 1 and trying to modify with some restrictions--
--2. Identify view that you create in point 1 and trying to modify with some restrictions--

--a. vPARTY--

ALTER VIEW vPARTY
AS
SELECT DISTINCT PRES_NAME, PARTY AS Party
FROM PRESIDENT

SELECT * FROM vPARTY

--b. vPRESIDENT--

ALTER VIEW vPRESIDENT
AS
SELECT DISTINCT PARTY AS Party, COUNT (PARTY) AS JumlahPresiden 
FROM PRESIDENT
WHERE BIRTH_YR < 1800
GROUP BY PARTY

SELECT * FROM vPRESIDENT
ORDER BY JumlahPresiden

--c. vPENGABDIAN--

ALTER VIEW vPENGABDIAN
AS
SELECT PRES_NAME AS Pres_Name, BIRTH_YR, YRS_SERV, PARTY
FROM PRESIDENT
WHERE YRS_SERV > 5
AND BIRTH_YR < 1881
AND PARTY = 'Federalist'

SELECT * FROM vPENGABDIAN
ORDER BY YRS_SERV DESC

--d. vSTATE--

ALTER VIEW vSTATE
AS
SELECT STATE_NAME AS StateBukanKelahiran, YEAR_ENTERED
FROM STATE
WHERE STATE_NAME NOT IN (SELECT STATE_BORN FROM PRESIDENT)
AND YEAR_ENTERED <1845

SELECT* FROM vSTATE

--e. vHOBBY--

ALTER VIEW vHOBBY
AS
SELECT DISTINCT PRES_MARRIAGE.PRES_NAME, MAR_YEAR
FROM PRES_MARRIAGE
INNER JOIN PRES_HOBBY
ON PRES_MARRIAGE.PRES_NAME = PRES_HOBBY.PRES_NAME 
WHERE PRES_HOBBY.HOBBY = 'Riding'
AND PRES_MARRIAGE.NR_CHILDREN = 0
AND MAR_YEAR < 1871

SELECT * FROM vHOBBY


--3. Try to modify and delete some views that you create in point 1--

--a. DROP vBORN--

DROP VIEW vBORN

--b. DROP vDEATH--

DROP VIEW vDEATH

--c. DROP vAGE--

DROP VIEW vAGE

--d. DROP vCANDIDATE--

DROP VIEW vCANDIDATE

--e. DROP vVOTES--

DROP VIEW vVOTES