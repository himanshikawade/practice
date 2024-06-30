create database college;
use college;
create table student(
rollno int primary key,
name varchar(50),
marks int not null,
grade varchar(5),
city varchar(20)
);

insert into student
(rollno,name,marks,grade,city)
values
(101,'lokesh',79,'C','Nagpur'),
(102,'Mahesh',82,'B','Nagpur'),
(103,'Anil',85,'B+','Nagpur'),
(104,'Sunil',89,'B+','Nagpur'),
(105,'Priya',90,'A','Nagpur'),
(106,'Sami',96,'A+','Nagpur'),
(107,'Soni',76,'C','Nagpur'),
(108,'Rahul',70,'C+','Nagpur');
select * from student;
select name,grade from student;
select distinct city from student;
select name,marks from student where marks>80;
select * from student where marks +10>100;
select * from student where marks>=90 or city='Nagpur';
select * from student where marks>=90 and city='Nagpur';
select * from student where marks between 80 and 90;
select * from student where city in('Nagpur','Mumbai','Pune');
select * from student where city not in('Mumbai','Pune');
select * from student where marks>75 limit 4;
select * from student order by marks desc limit 3;
select avg(marks) from student;
select max(marks) from student;
select sum(marks) from student;
select count(name) from student;