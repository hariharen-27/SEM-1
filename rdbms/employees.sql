create table client_master(client_no varchar(20),name varchar(20),city varchar(20),pincode number,bal_date number);
insert into client_master values('c00001','smitha jain','mumbai',400054,15000);
insert into client_master values('c00002','vandana rao','chennai',780001,0);
insert into client_master values('c00003','prem pujari','mumbai',400057,5000);
insert into client_master values('c00004','basu nath','mumbai',400056,0);
insert into client_master values('c00005','ravi shankar','delhi',100001,2000);
insert into client_master values('c00006','roopa','mumbai',400050,0);

create table sale_order(order_no varchar(20) primary key,order_date date, client_no varchar(20),salesman varchar(20),dely_date date,order_status varchar(25));
insert into sale_order values('o19001','12-JAN-13','c00001','s00001','20-JAN-13','in process');
insert into sale_order values('o19002','25-JAN-13','c00002','s00002','27-JAN-13','cancelled');
insert into sale_order values('o46865','18-FEB-13','c00003','s00003','20-FEB-13','fulfilled');
insert into sale_order values('o19003','03-APR-13','c00001','s00001','07-APR-13','fulfilled');
insert into sale_order values('o46866','20-MAR-13','c00004','s00002','07-APR-13','cancelled');
insert into sale_order values('o19008','24-MAY-13','c00005','s00004','20-MAY-13','in process');

select * from client_master where bal_due=0;
select * from client_master where bal_due>5000;
select * from client_master where bal_due>5000 and bal_due<20000;
select * from client_master where city like 'c%' or city like 'd%';
select * from client_master where pincode like '%1';
update client_master set city='jaipur' where client_no='c00004';
select * from sale_order where order_status='cancelled';
select * from client_master where city = 'mumbai';
select client_master.client_no,name,city,pincode from client_master , sale_order where client_master.client_no= sale_order.client_no and (order_no='o19003' or order_no='o19002');
