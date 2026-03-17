//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentListContentView, WCDataItem, WCImageView;

@protocol WCCommentListContentViewDelegate <NSObject>
- (void)commentListContentView:(WCCommentListContentView *)arg1 didClickWCImage:(WCImageView *)arg2;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onHeadAdSpecialClick:(WCDataItem *)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadImageClicked:(NSString *)arg1;
@end

