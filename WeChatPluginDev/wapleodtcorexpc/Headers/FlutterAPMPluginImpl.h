//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEngine, NSNumber, NSString;

@interface FlutterAPMPluginImpl : NSObject
{
    _Bool _isRootEngine;
    NSNumber *_bindFlutterInstanceMills;
    NSNumber *_transitionStartMills;
    NSNumber *_transitionEndMills;
    NSNumber *_transitionMode;
    NSNumber *_engineCreateStartMs;
    NSNumber *_engineCreateFinishMs;
    FlutterEngine *_engine;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRootEngine; // @synthesize isRootEngine=_isRootEngine;
@property(nonatomic) __weak FlutterEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSNumber *engineCreateFinishMs; // @synthesize engineCreateFinishMs=_engineCreateFinishMs;
@property(retain, nonatomic) NSNumber *engineCreateStartMs; // @synthesize engineCreateStartMs=_engineCreateStartMs;
@property(retain, nonatomic) NSNumber *transitionMode; // @synthesize transitionMode=_transitionMode;
@property(retain, nonatomic) NSNumber *transitionEndMills; // @synthesize transitionEndMills=_transitionEndMills;
@property(retain, nonatomic) NSNumber *transitionStartMills; // @synthesize transitionStartMills=_transitionStartMills;
@property(retain, nonatomic) NSNumber *bindFlutterInstanceMills; // @synthesize bindFlutterInstanceMills=_bindFlutterInstanceMills;
- (id)getTransitionReportInfoWithError:(id *)arg1;
- (id)getBindFlutterInstanceMillsWithError:(id *)arg1;
- (id)getSnapshotRenderMillsWithError:(id *)arg1;
- (id)getNativeFirstScrollMillsWithError:(id *)arg1;
- (id)getNativeFirstPointerDownMillsWithError:(id *)arg1;
- (id)getFlutterEngineCreateStartMillsWithError:(id *)arg1;
- (id)getFlutterEngineCreateFinishMillsWithError:(id *)arg1;
- (void)getDartVMMemoryInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)initWithEngineCreateStartMs:(id)arg1 engineCreateFinishMs:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

