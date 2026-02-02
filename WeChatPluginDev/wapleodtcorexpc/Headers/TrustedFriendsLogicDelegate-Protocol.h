//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TrustedFriendsLogic;

@protocol TrustedFriendsLogicDelegate <NSObject>
- (void)didRemoveTrustedFriendsLocally:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didAddTrustedFriendsLocally:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFinishSyncTrustedFriends:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFinishGetTrustedFriends:(TrustedFriendsLogic *)arg1 contacts:(NSArray *)arg2;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(NSString *)arg3;
- (void)didStartCGI:(unsigned int)arg1;

@optional
- (void)didAlertViewWithReason:(unsigned int)arg1 isCancelButton:(_Bool)arg2;
@end

