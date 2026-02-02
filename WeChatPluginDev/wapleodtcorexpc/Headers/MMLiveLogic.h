//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveConnectMicLogic, MMLiveTaskId, NSString;
@protocol MMLiveLogicDelegate;

@interface MMLiveLogic : NSObject
{
    MMLiveTaskId *_taskId;
    id <MMLiveLogicDelegate> _liveLogicDelegate;
    MMLiveConnectMicLogic *_connectMicLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveConnectMicLogic *connectMicLogic; // @synthesize connectMicLogic=_connectMicLogic;
@property(nonatomic) __weak id <MMLiveLogicDelegate> liveLogicDelegate; // @synthesize liveLogicDelegate=_liveLogicDelegate;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportSDKEnterRoomError:(id)arg1;
- (void)handleNotifyCommentForSkinSegClose;
- (void)handleNotifyCommentForSkinSegOpen;
- (void)onConnectMicModeChanged:(_Bool)arg1;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)arg1;
- (void)onAcceptLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onUpdateLiveMicEnableWithTaskId:(id)arg1 enable:(_Bool)arg2;
- (_Bool)backToPluginLive;
- (void)startWeChatPayVerifyProcess:(long long)arg1;
- (void)openGloryList:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableAnchorProductQuestion:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableRealTimeDataPanel:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)hiddenAudienceName:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableLiveLike:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableLiveReward:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enterLiveRoom;
- (void)applyConnectMic;
- (void)resetAnchorStatus;
- (void)sysCallInterrupted:(_Bool)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (_Bool)fetchNewLiveSdkInfo;
- (_Bool)getLiveInfo;
- (_Bool)shareLive;
- (_Bool)notifyStartLiveSucceeded;
- (_Bool)setOffline;
- (_Bool)closeWait:(unsigned int)arg1;
- (_Bool)closeLiveByCutLive;
- (_Bool)closeLiveByAssitant;
- (_Bool)closeLive;
- (void)clearLive;
- (_Bool)cancelLive;
- (_Bool)joinLive:(unsigned long long)arg1;
- (_Bool)createLiveWithLiveCreateParamsModel:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)initConnectMicLogic;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

