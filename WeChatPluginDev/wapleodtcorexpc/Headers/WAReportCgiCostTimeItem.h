//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportCgiCostTimeItem
{
    unsigned int _costTime;
    unsigned int _responseSize;
    int _ret;
    int _bizRet;
    int _cgiNo;
    long long _startTimeStamp;
    long long _endTimeStamp;
}

@property(nonatomic) int cgiNo; // @synthesize cgiNo=_cgiNo;
@property(nonatomic) int bizRet; // @synthesize bizRet=_bizRet;
@property(nonatomic) int ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned int responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) long long endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(nonatomic) long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
- (id)reportString;
- (int)reportID;

@end

