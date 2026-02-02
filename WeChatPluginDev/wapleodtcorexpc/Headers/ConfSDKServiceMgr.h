//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString;

@interface ConfSDKServiceMgr
{
    NSRecursiveLock *_mEngineLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *mEngineLock; // @synthesize mEngineLock=_mEngineLock;
- (void)HeadSetPlugin:(_Bool)arg1;
- (void)subscribeByUsernameList:(id)arg1 LargeUsers:(id)arg2;
- (int)checkUsingMultiPathCellularConn;
- (void)switchVideoToScreenPaused;
- (void)switchVideoToScreen;
- (void)switchVideoToCamera;
- (void)stopVideo;
- (void)setSpeakerPhone:(_Bool)arg1;
- (void)setMicroPhoneMute:(_Bool)arg1;
- (void)BeginSysCallInterruption;
- (void)EndSysCallInterruption;
- (void)addMembers:(id)arg1;
- (void)accept:(unsigned long long)arg1;
- (void)hangup:(int)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2;
- (int)sendScreenData:(void *)arg1;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(_Bool)arg2;
- (int)engineDoMemberSelectForView:(id)arg1;
- (id)getMemberQualityInfoList;
- (id)sortedTalkingMembers;
- (id)getTalkingMember;
- (id)getMemberByUsername:(id)arg1;
- (id)getMemberByMemberid:(int)arg1;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(struct __CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)callEngineInit:(id)arg1 sessionKey:(id)arg2 idcInfo:(id)arg3 audioType:(int)arg4 videoRatio:(int)arg5 videoLength:(int)arg6 isSubCallEnable:(_Bool)arg7 isIlink:(_Bool)arg8 nCallback:(struct IWXConfCallback *)arg9;
- (int)callEngineUninit;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

