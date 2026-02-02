//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPPlayerLogContext, TPPluginManager;
@protocol ITPInnerRichMediaSynchronizerDelegate, ITPPlayerRichMediaProcessorWrapper, ITPRichMediaSynchronizerDelegate;

@interface TPRichMediaSynchronizer : NSObject
{
    id <ITPRichMediaSynchronizerDelegate> delegate;
    id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate;
    id <ITPPlayerRichMediaProcessorWrapper> _processor;
    TPPlayerLogContext *_log;
    TPPluginManager *_pluginManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) id <ITPPlayerRichMediaProcessorWrapper> processor; // @synthesize processor=_processor;
@property(nonatomic) __weak id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate; // @synthesize innerDelegate;
@property(nonatomic) __weak id <ITPRichMediaSynchronizerDelegate> delegate; // @synthesize delegate;
- (void)pushEventToPluginWithEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (long long)OnGetCurrentPositionMs:(id)arg1;
- (void)onRichMediaProcessor:(id)arg1 infoType:(int)arg2 param1:(long long)arg3 param2:(long long)arg4 param3:(long long)arg5 object:(void *)arg6;
- (void)onRichMediaFeatureFailure:(id)arg1 richMediaIndex:(int)arg2 errorCode:(int)arg3;
- (void)onSelectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onDeselectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onRichMediaProcessor:(id)arg1 richMediaIndex:(int)arg2 featureData:(const void *)arg3;
- (void)onRichMediaProcessor:(id)arg1 errorCode:(int)arg2;
- (void)onRichMediaProcessorPrepared:(id)arg1;
- (long long)setPlaybackRate:(float)arg1;
- (id)getFeatureDataWithCurrentPositionMs:(long long)arg1 richMediaIndexes:(id)arg2;
- (long long)seekTo:(long long)arg1;
- (void)releaseRichMedia;
- (long long)reset;
- (long long)deselectFeatureAsync:(int)arg1;
- (long long)selectFeatureAsync:(int)arg1 extraRequestInfo:(id)arg2;
- (id)features;
- (long long)prepareAsync;
- (long long)setRichMediaSource:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

