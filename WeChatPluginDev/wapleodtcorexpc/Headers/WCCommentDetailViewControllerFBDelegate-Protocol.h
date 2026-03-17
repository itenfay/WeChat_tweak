//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCommentDetailViewControllerFB, WCDataItem;

@protocol WCCommentDetailViewControllerFBDelegate <NSObject>

@optional
- (void)onCommentDetailViewController:(WCCommentDetailViewControllerFB *)arg1 reEditDataItem:(WCDataItem *)arg2;
- (void)onCommentListViewDataChanged:(WCDataItem *)arg1;
- (void)onBeforeDeleteData;
- (void)onDeleteData;
- (void)onRestartUpload;
@end

