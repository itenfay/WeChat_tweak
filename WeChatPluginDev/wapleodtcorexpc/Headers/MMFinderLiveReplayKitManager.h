//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderScreenRecordGuideView, NSString, RPSystemBroadcastPickerView;

@interface MMFinderLiveReplayKitManager : NSObject
{
    _Bool _isHeadsetConnected;
    _Bool _isRecordPermissionCheckOK;
    _Bool _isInRecordPermissionCheckProcess;
    _Bool _isOpenRecordLive;
    _Bool _isBroadcastRecording;
    unsigned long long _scene;
    CDUnknownBlockType _screenRecordChangeBlock;
    CDUnknownBlockType _liveReportActionBlock;
    CDUnknownBlockType _starterReportActionBlock;
    CDUnknownBlockType _headsetConnectedBlock;
    MMFinderScreenRecordGuideView *_screenRecordGuideView;
    RPSystemBroadcastPickerView *_broadcastPickerView;
    CDUnknownBlockType _completeBlock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBroadcastRecording; // @synthesize isBroadcastRecording=_isBroadcastRecording;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool isOpenRecordLive; // @synthesize isOpenRecordLive=_isOpenRecordLive;
@property(nonatomic) _Bool isInRecordPermissionCheckProcess; // @synthesize isInRecordPermissionCheckProcess=_isInRecordPermissionCheckProcess;
@property(nonatomic) _Bool isRecordPermissionCheckOK; // @synthesize isRecordPermissionCheckOK=_isRecordPermissionCheckOK;
@property(retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView; // @synthesize broadcastPickerView=_broadcastPickerView;
@property(retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView; // @synthesize screenRecordGuideView=_screenRecordGuideView;
@property(copy, nonatomic) CDUnknownBlockType headsetConnectedBlock; // @synthesize headsetConnectedBlock=_headsetConnectedBlock;
@property(copy, nonatomic) CDUnknownBlockType starterReportActionBlock; // @synthesize starterReportActionBlock=_starterReportActionBlock;
@property(copy, nonatomic) CDUnknownBlockType liveReportActionBlock; // @synthesize liveReportActionBlock=_liveReportActionBlock;
@property(copy, nonatomic) CDUnknownBlockType screenRecordChangeBlock; // @synthesize screenRecordChangeBlock=_screenRecordChangeBlock;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isHeadsetConnected; // @synthesize isHeadsetConnected=_isHeadsetConnected;
- (void)onBroadcastStop;
- (void)onBroadcastStarted;
- (id)currentRecordGuideView;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (unsigned long long)systemCapabilityAuthScene;
- (void)checkPermissionsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)getBroadCastBundleIdentifier;
- (void)inner_startRecordScreen;
- (void)updateOpenRecordLive:(_Bool)arg1;
- (void)showRecordGuideView;
- (void)handleReplayKitManagerCompleteWithType:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)isAbnormalState;
- (_Bool)checkAbnormalState;
- (_Bool)broadcastRecording;
- (void)startRecordScreenWithScene:(unsigned long long)arg1 completeBlock:(CDUnknownBlockType)arg2 starterReportActionBlock:(CDUnknownBlockType)arg3 liveReportActionBlock:(CDUnknownBlockType)arg4;
- (void)checkScreenCaptureState:(_Bool)arg1;
- (void)hideScreenRecordGuideView;
- (void)stopRecordScreen;
- (void)routeChange:(id)arg1;
- (id)init;
- (void)setUpService;
- (void)clearService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

