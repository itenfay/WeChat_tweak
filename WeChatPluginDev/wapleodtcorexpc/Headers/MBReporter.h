//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicBrushService, NSString;

@interface MBReporter : NSObject
{
    _Bool _skipReport;
    MagicBrushService *_service;
    NSString *_bizName;
    double _bizCreatedTime;
    double _setupBeginTime;
    double _mainBeginTime;
    double _startBeginTime;
    double _destroyBeginTime;
}

+ (id)correctReportString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool skipReport; // @synthesize skipReport=_skipReport;
@property(nonatomic) double destroyBeginTime; // @synthesize destroyBeginTime=_destroyBeginTime;
@property(nonatomic) double startBeginTime; // @synthesize startBeginTime=_startBeginTime;
@property(nonatomic) double mainBeginTime; // @synthesize mainBeginTime=_mainBeginTime;
@property(nonatomic) double setupBeginTime; // @synthesize setupBeginTime=_setupBeginTime;
@property(nonatomic) double bizCreatedTime; // @synthesize bizCreatedTime=_bizCreatedTime;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(nonatomic) __weak MagicBrushService *service; // @synthesize service=_service;
- (void)reportRuntimeException:(id)arg1 content:(id)arg2 extra:(id)arg3;
- (void)reportTime:(unsigned long long)arg1 delta:(double)arg2 extra:(id)arg3;
- (void)reportPluginCostTime:(id)arg1;
- (void)reportMainCostTime;
- (void)reportDestroyCostTime;
- (void)reportStartCostTime;
- (void)reportSetupCostTime:(_Bool)arg1;

@end

