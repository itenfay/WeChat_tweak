//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact, WCFinderMentionUserListViewController;

@protocol WCFinderMentionUserListViewControllerDelegate <NSObject>

@optional
- (void)cancelSelectedMentionUserWith:(WCFinderMentionUserListViewController *)arg1;
- (void)didSelectedMentionUserWith:(WCFinderMentionUserListViewController *)arg1 userContact:(WCFinderContact *)arg2;
@end

