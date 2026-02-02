//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface JSCSampleProfiler : NSObject
{
    NSMutableDictionary *_lastProfileLogs;
    NSMutableDictionary *_currProfileLogs;
    NSMutableDictionary *_timers;
    NSMutableArray *_contexts;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)contextName:(id)arg1;
- (void)updateSampleData:(id)arg1 contextName:(id)arg2;
- (void)jscScriptProfilerStopTracking:(id)arg1;
- (void)jscScriptProfilerStartTracking:(id)arg1;
- (void)captureSamplesNow:(CDUnknownBlockType)arg1;
- (void)stopSampleProfile:(id)arg1;
- (void)startSampleProfile:(id)arg1;
- (id)init;

@end

