//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem, WCForwardViewController;

@protocol WCCommitViewResultDelegate <NSObject>
- (void)forwardViewController:(WCForwardViewController *)arg1 didFinishForwardingWithDataItem:(WCDataItem *)arg2;
- (void)forwardViewControllerDidCancel:(WCForwardViewController *)arg1;
- (void)onDoneForwardForForwardView:(WCForwardViewController *)arg1;
- (void)onCancelForwardForForwardView:(WCForwardViewController *)arg1;
@end

