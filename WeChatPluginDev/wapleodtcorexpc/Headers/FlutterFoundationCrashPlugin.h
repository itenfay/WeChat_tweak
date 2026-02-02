//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMStackReportConnection, NSDateFormatter, NSString;

@interface FlutterFoundationCrashPlugin : NSObject
{
    _Bool _killSelf;
    _Bool _reportToCrash;
    _Bool _exitWhenKillSelf;
    NSString *_pluginName;
    long long _engineCreateTime;
    MMStackReportConnection *_reportConnection;
    NSDateFormatter *_timeFormatter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool exitWhenKillSelf; // @synthesize exitWhenKillSelf=_exitWhenKillSelf;
@property(nonatomic) _Bool reportToCrash; // @synthesize reportToCrash=_reportToCrash;
@property(nonatomic) _Bool killSelf; // @synthesize killSelf=_killSelf;
@property(retain, nonatomic) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) MMStackReportConnection *reportConnection; // @synthesize reportConnection=_reportConnection;
@property(nonatomic) long long engineCreateTime; // @synthesize engineCreateTime=_engineCreateTime;
@property(retain, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
- (id)reportPageName:(id)arg1;
- (id)flutterInfo:(id)arg1;
- (id)byteToMegabyte:(unsigned long long)arg1;
- (id)timeInfo;
- (id)memoryInfo;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)reportStack:(id)arg1 killSelf:(id)arg2 error:(id)arg3 stackTrace:(id)arg4;
- (void)reportKvParams:(id)arg1 killSelf:(_Bool)arg2 error:(id)arg3 stackTrace:(id)arg4;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

