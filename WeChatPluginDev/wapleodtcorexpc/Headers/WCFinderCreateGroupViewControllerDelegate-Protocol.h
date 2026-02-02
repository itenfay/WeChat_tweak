//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCFinderCreateGroupViewControllerDelegate <NSObject>

@optional
- (void)createUserClosed;
- (void)createUserFailed;
- (void)cancelCreateUser;
- (void)createUserFinished:(WCFinderContact *)arg1;
- (void)createUserConfirmed;
@end

