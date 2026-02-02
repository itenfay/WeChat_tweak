//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MMLiveOpenApiMgrExt <NSObject>

@optional
- (void)onGetLiveOnlineMemberList:(unsigned long long)arg1 liveRoomMemberList:(NSArray *)arg2;
- (void)onReceiveLiveMusicMsg:(_Bool)arg1 musicName:(NSString *)arg2;
- (void)onReceiveLiveRoomMsg:(unsigned long long)arg1 liveRoomMsgList:(NSArray *)arg2 currOnlineCount:(unsigned int)arg3 totalViewCount:(unsigned int)arg4 currLikeCount:(unsigned long long)arg5 totalRewardCount:(unsigned long long)arg6;
@end

