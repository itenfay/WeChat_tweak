//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveOnlineUserLogicDelegate-Protocol.h"

@class NSArray, NSError, NSString;

@protocol MMGroupLiveOnlineUserLogicDelegate <MMLiveOnlineUserLogicDelegate>
- (void)onKickAudienceForGroupLiveWithError:(NSError *)arg1 userName:(NSString *)arg2;
- (void)onFetchGroupOnlineUserListWithError:(NSError *)arg1 userList:(NSArray *)arg2;
@end

