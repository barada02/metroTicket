CREATE TABLE TicketData (
    TicketID INT PRIMARY KEY IDENTITY(1,1),
    JourneyType VARCHAR(50),
    DateTime DATETIME,
    Start VARCHAR(50),
    Destination VARCHAR(50),
    NumOfPassengers INT,
    TicketPrice DECIMAL(10, 2)
);
