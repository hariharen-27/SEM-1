create table SALESPERSON(SSN varchar(50)primary KEY,
Name varchar(50),
Join_Year date,
Dept_No NUMBER );

create table TRIP(SSN varchar(50), 
foreign key (SSN) references SALESPERSON(SSN),
From_City varchar(50),
Departure_Date date,
Return_Date date,
Trip_ID number primary key);

create table EXPENSE(Trip_ID number,
Cheque number ,
Amount number,
Date_of_Issue date, 
foreign key (Trip_ID) references TRIP(Trip_ID));

alter table EXPENSE add constraints primary1 primary key(Cheque);

insert into SALESPERSON values('E01','raja','1-jan-2019',555);
insert into SALESPERSON values('E02','kumar','15-jan-2017',666);
insert into SALESPERSON values('E03','shankar','16-mar-2018',333);
insert into SALESPERSON values('E04','muthu','14-may-2018',444);
insert into SALESPERSON values('E05','deepak','20-may-2019',666);


insert into TRIP values('E01','Delhi','22-mar-2022','28-mar-2022',1234);
insert into TRIP values('E01','Mumbai','22-apr-2022','24-apr-2022',1235);
insert into TRIP values('E02','Chennai','10-jan-2022','12-jan-2022',1236);
insert into TRIP values('E03','Kochi','20-may-2022','28-may-2022',1237);
insert into TRIP values('E04','Delhi','12-aug-2022','14-aug-2022',1238);
insert into TRIP values('E05','Mumbai','12-sep-2022','14-sep-2022',1239);
insert into TRIP values('E01','Suratkal','15-may-2022','22-may-2022',1240);
insert into TRIP values('E05','Mumbai','25-sep-2022','29-sep-2022',1242);


insert into EXPENSE values(1234,99989,45000,'29-mar-2022');
insert into EXPENSE values(1235,99798,35000,'26-apr-2022');
insert into EXPENSE values(1236,90787,55000,'15-jan-2022');
insert into EXPENSE values(1237,99666,30000,'29-may-2022');
insert into EXPENSE values(1238,98959,20000,'16-aug-2022');
insert into EXPENSE values(1240,98299,39000,'25-may-2022');
insert into EXPENSE values(1242,98288,60000,'30-sep-2022');



1.
select * from TRIP where Trip_ID in (select Trip_ID from EXPENSE where Amount>40000);

2.
select SSN from SALESPERSON where SSN in (select SSN from TRIP where From_City='Delhi');
3.
select sum(Amount)  from EXPENSE where Trip_ID in (select Trip_ID from TRIP where SSN='E03');
4.
select SSN from TRIP group by SSN having count(SSN) >1;



