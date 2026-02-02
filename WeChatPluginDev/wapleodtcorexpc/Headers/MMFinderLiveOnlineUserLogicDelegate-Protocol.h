//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveOnlineUserLogicDelegate-Protocol.h"

@class MMFinderGetLiveGloryListFailModel, MMFinderGetLiveGloryListSuccessModel, NSError, WCFinderGetLiveOnlineMemberResult, WCFinderLiveKtvGetPlayMemberResult;

@protocol MMFinderLiveOnlineUserLogicDelegate <MMLiveOnlineUserLogicDelegate>
- (void)onGetLiveGloryList:(MMFinderGetLiveGloryListSuccessModel *)arg1 error:(MMFinderGetLiveGloryListFailModel *)arg2;
- (void)onFetchFinderKtvPlayMemberListWithError:(NSError *)arg1 ktvPlayMemberResult:(WCFinderLiveKtvGetPlayMemberResult *)arg2;
- (void)onFetchFinderOnlineUserListWithError:(NSError *)arg1 onlineMemberResult:(WCFinderGetLiveOnlineMemberResult *)arg2;
@end

