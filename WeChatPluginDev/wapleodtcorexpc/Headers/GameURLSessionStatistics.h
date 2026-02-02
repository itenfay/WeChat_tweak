//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameURLSessionStatistics : NSObject
{
    _Bool _hasSimpleDnsLevelDown;
    unsigned int _normalReqCount;
    unsigned int _normalSucCount;
    unsigned int _normalFailCount;
    unsigned int _normalAvgRTT;
    unsigned int _simpleReqCount;
    unsigned int _simpleSucCount;
    unsigned int _simpleFailCount;
    unsigned int _simpleAvgRTT;
    unsigned int _dnsErrorCount;
    unsigned int _normalRetryCount;
    unsigned int _simpleRetryCount;
    unsigned int _retrySucCount;
    unsigned int _certErrorCount;
    unsigned int _simpleRetrySucCount;
    unsigned int _totalCount;
    unsigned long long _normalRttTotalTime;
    unsigned long long _simpleRttTotalTime;
}

@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long simpleRttTotalTime; // @synthesize simpleRttTotalTime=_simpleRttTotalTime;
@property(nonatomic) unsigned long long normalRttTotalTime; // @synthesize normalRttTotalTime=_normalRttTotalTime;
@property(nonatomic) _Bool hasSimpleDnsLevelDown; // @synthesize hasSimpleDnsLevelDown=_hasSimpleDnsLevelDown;
@property(nonatomic) unsigned int simpleRetrySucCount; // @synthesize simpleRetrySucCount=_simpleRetrySucCount;
@property(nonatomic) unsigned int certErrorCount; // @synthesize certErrorCount=_certErrorCount;
@property(nonatomic) unsigned int retrySucCount; // @synthesize retrySucCount=_retrySucCount;
@property(nonatomic) unsigned int simpleRetryCount; // @synthesize simpleRetryCount=_simpleRetryCount;
@property(nonatomic) unsigned int normalRetryCount; // @synthesize normalRetryCount=_normalRetryCount;
@property(nonatomic) unsigned int dnsErrorCount; // @synthesize dnsErrorCount=_dnsErrorCount;
@property(nonatomic) unsigned int simpleAvgRTT; // @synthesize simpleAvgRTT=_simpleAvgRTT;
@property(nonatomic) unsigned int simpleFailCount; // @synthesize simpleFailCount=_simpleFailCount;
@property(nonatomic) unsigned int simpleSucCount; // @synthesize simpleSucCount=_simpleSucCount;
@property(nonatomic) unsigned int simpleReqCount; // @synthesize simpleReqCount=_simpleReqCount;
@property(nonatomic) unsigned int normalAvgRTT; // @synthesize normalAvgRTT=_normalAvgRTT;
@property(nonatomic) unsigned int normalFailCount; // @synthesize normalFailCount=_normalFailCount;
@property(nonatomic) unsigned int normalSucCount; // @synthesize normalSucCount=_normalSucCount;
@property(nonatomic) unsigned int normalReqCount; // @synthesize normalReqCount=_normalReqCount;
- (void)report;
- (int)getReportNetWorkType;
- (id)toReportString;
- (void)doReportAndClean;
- (void)recordSimpleDnsLevelDown;
- (void)recordReqFailed:(id)arg1;
- (void)recordReqSuccess:(id)arg1;
- (void)recordNewRequest:(id)arg1;

@end

