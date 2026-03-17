//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MatrixReportStrategy : NSObject
{
    _Bool _vipStrategy;
    float _sampleRatio;
    unsigned long long _reportNetType;
    unsigned long long _maxDailyUploadCnt;
    unsigned long long _timeoutSecond;
}

@property(nonatomic) unsigned long long timeoutSecond; // @synthesize timeoutSecond=_timeoutSecond;
@property(nonatomic) _Bool vipStrategy; // @synthesize vipStrategy=_vipStrategy;
@property(nonatomic) float sampleRatio; // @synthesize sampleRatio=_sampleRatio;
@property(nonatomic) unsigned long long maxDailyUploadCnt; // @synthesize maxDailyUploadCnt=_maxDailyUploadCnt;
@property(nonatomic) unsigned long long reportNetType; // @synthesize reportNetType=_reportNetType;
- (id)init;

@end

