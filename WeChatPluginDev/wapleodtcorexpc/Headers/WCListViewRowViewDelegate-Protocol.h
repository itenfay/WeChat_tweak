//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCDataItem, WCListBaseCellView;

@protocol WCListViewRowViewDelegate <NSObject>

@optional
- (void)onRestoreWCListCellView:(WCListBaseCellView *)arg1;
- (void)handleClickImageContentView:(UIView *)arg1;
- (void)handleClickImageView:(UIView *)arg1;
- (void)handleFeedView:(WCDataItem *)arg1;
- (void)handleClickShortVideoContentView:(WCDataItem *)arg1;
- (void)handleShortVideoView:(WCDataItem *)arg1;
- (void)handleVideoView:(WCDataItem *)arg1;
- (void)handleMusicView:(WCDataItem *)arg1;
- (void)handleTextView:(WCDataItem *)arg1;
- (UIView *)getImageViewByDataItem:(WCDataItem *)arg1;
@end

