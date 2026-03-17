//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCardData, WCCardListViewController;

@protocol WCCardListViewControllerDelegate <NSObject>
- (void)onWCCardListDidBeCleared;
- (void)onWCCardListViewControllerDidSelected:(WCCardData *)arg1 listViewController:(WCCardListViewController *)arg2;
- (void)onWCCardListViewControllerCancel:(WCCardListViewController *)arg1;
@end

