//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MultitalkApiDelegate-Protocol.h"

@class MMConfSDKMemberMgr, NSArray, NSString;

@protocol IlinkServiceToMultiTalkMgr <MultitalkApiDelegate>
- (void)receiverCanStartCamera;
- (void)hangupMultiTalkByCallEnd;
- (void)showToastOnMultiTalkVC:(NSString *)arg1;
- (void)onIlinkChangeToMultiTalk:(NSArray *)arg1 confSDKMemberMgr:(MMConfSDKMemberMgr *)arg2 isMicMute:(_Bool)arg3 isSpeakerOn:(_Bool)arg4 localVideoClosed:(_Bool)arg5 remoteVideoClosed:(_Bool)arg6;
- (void)onIlinkInviteMultiTalk:(id)arg1;
- (void)setClipRatioWith:(int)arg1 enableClipBeforePreprocessing:(_Bool)arg2;
- (void)ilinkDidEnd;
- (void)receiverOpenUIAfterAckSuccess:(_Bool)arg1;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)setVirtualBackground:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)onMultiTalkMainViewControllerVideoSelected:(_Bool)arg1;
@end

