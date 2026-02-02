//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetTrustedFriendsResp, NSArray, NSString;

@protocol TrustedFriendsCgiDelegate <NSObject>
- (void)onSyncTrustedFriendsSuccess:(NSArray *)arg1;
- (void)onGetTrustedFriendsListSuccess:(GetTrustedFriendsResp *)arg1;
- (void)onCgiFailed:(unsigned int)arg1 error:(int)arg2 msg:(NSString *)arg3;
@end

