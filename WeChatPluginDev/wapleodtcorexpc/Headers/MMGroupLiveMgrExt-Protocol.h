//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetLiveMessageResponse, LiveInfo, LiveSdkInfo, MMGroupLiveInfoItem, MMLiveApplyConnectMicAudience, NSArray, NSDictionary, NSError, NSString;

@protocol MMGroupLiveMgrExt <NSObject>

@optional
- (void)onGetLiveOnlineMemberByIdResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andAudienceOnlineInfo:(NSDictionary *)arg3;
- (void)onGetLiveMicAudienceInfoResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andAudience:(MMLiveApplyConnectMicAudience *)arg3;
- (void)onSetAnchorStatusResult:(NSError *)arg1 liveId:(unsigned long long)arg2;
- (void)onKickAudienceResult:(NSError *)arg1 userName:(NSString *)arg2 liveId:(unsigned long long)arg3 roomId:(NSString *)arg4;
- (void)onGetRefreshLiveMicWithLiveId:(NSError *)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(LiveSdkInfo *)arg3;
- (void)onGetLiveOnlineUserStateListWithLiveId:(unsigned long long)arg1 andRoomId:(NSString *)arg2 andUserStateList:(NSArray *)arg3;
- (void)onGetLiveOnlineUserListWithLiveId:(unsigned long long)arg1 andRoomId:(NSString *)arg2 andUserList:(NSArray *)arg3;
- (void)onGetLiveInfoWithResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3 andLiveInfo:(LiveInfo *)arg4;
- (void)onLiveCountChanged:(NSString *)arg1;
- (void)onGetShareLiveMessage:(MMGroupLiveInfoItem *)arg1 andLiveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(MMLiveApplyConnectMicAudience *)arg2;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(NSString *)arg2;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(_Bool)arg2;
- (void)onLiveVerifyWithEventId:(unsigned int)arg1 result:(NSError *)arg2 isVerified:(_Bool)arg3 withVerifyUrl:(NSString *)arg4;
- (void)onLiveLikeResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3;
- (void)onLiveIsEnableComment:(_Bool)arg1 notifyContent:(NSString *)arg2 liveId:(unsigned long long)arg3;
- (void)onBanLiveCommentResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3 enableComment:(_Bool)arg4;
- (void)onOpenLiveReplayResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3 enableLiveReplay:(_Bool)arg4;
- (void)onPostLiveMessageResult:(NSError *)arg1 liveId:(unsigned long long)arg2 andRoomId:(NSString *)arg3;
- (void)onGetLiveMessageResult:(NSError *)arg1 liveMessageResp:(GetLiveMessageResponse *)arg2 liveId:(unsigned long long)arg3 andRoomId:(NSString *)arg4;
- (void)onLiveClosedResult:(NSError *)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 liveMicId:(NSString *)arg2 msgServerTime:(unsigned int)arg3 andLiveSdkInfo:(LiveSdkInfo *)arg4;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(MMLiveApplyConnectMicAudience *)arg2;
- (void)onCloseApplyLiveMicResult:(NSError *)arg1 lastAttemptValue:(_Bool)arg2 andLiveId:(unsigned long long)arg3;
- (void)onCloseLiveMicResult:(NSError *)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(NSString *)arg3;
- (void)onAcceptLiveMicResult:(NSError *)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(NSString *)arg3;
- (void)onApplyLiveMicResult:(NSError *)arg1 liveId:(unsigned long long)arg2 liveMicId:(NSString *)arg3 isVerified:(_Bool)arg4 andVerifyUrl:(NSString *)arg5;
- (void)onShareLiveResult:(NSError *)arg1 andLiveId:(unsigned long long)arg2;
- (void)onJoinLiveResult:(NSError *)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(LiveSdkInfo *)arg3;
- (void)onCreateLiveResult:(NSError *)arg1 andLiveInfo:(LiveInfo *)arg2 isVerified:(_Bool)arg3 andVerifyUrl:(NSString *)arg4;
@end

