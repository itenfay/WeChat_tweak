//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCoinLogger : NSObject
{
    unsigned long long _businessId;
    NSString *_buyTingVipSession;
    NSString *__reportSessionId;
}

+ (void)setupConsumeDetaiViewReport:(id)arg1;
+ (void)setupConsumeHelpReport:(id)arg1;
+ (void)setupConsumeTipsReport:(id)arg1;
+ (void)setupConsumeButtonReport:(id)arg1;
+ (void)setupCoinViewReport:(id)arg1;
+ (void)reportBuyCoinSuccess;
+ (void)reportBuyCoinSuccessCostTime:(unsigned long long)arg1;
+ (void)reportKVKey:(unsigned int)arg1;
+ (void)reportIDKey:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *_reportSessionId; // @synthesize _reportSessionId=__reportSessionId;
@property(retain, nonatomic) NSString *buyTingVipSession; // @synthesize buyTingVipSession=_buyTingVipSession;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
- (void)genReportSessionId;
- (id)getReportSessionId;

@end

