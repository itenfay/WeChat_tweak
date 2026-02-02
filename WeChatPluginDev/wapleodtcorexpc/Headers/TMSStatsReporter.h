//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TMSStatsReporter : NSObject
{
    _Bool _isShowLog;
    NSMutableDictionary *_commomParams;
}

+ (id)commonCrashValueDict:(id)arg1;
+ (id)reporter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commomParams; // @synthesize commomParams=_commomParams;
@property(nonatomic) _Bool isShowLog; // @synthesize isShowLog=_isShowLog;
- (void)setBeaconAdditionalParams;
- (void)setCommonReportParams:(id)arg1;
- (void)setupBeacon;
- (_Bool)baseReportEventValidation:(id)arg1;
- (void)reportUserScene:(id)arg1;
- (void)reportCrash:(id)arg1;
- (void)reportEvent:(id)arg1;
- (id)fillDictionaryWithClassProperty:(id)arg1 withProperties:(id)arg2;
- (void)reportNetflowEvent:(id)arg1;
- (void)setReportCofig:(id)arg1;
- (id)init;

@end

