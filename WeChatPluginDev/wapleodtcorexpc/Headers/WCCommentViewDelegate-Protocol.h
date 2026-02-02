//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCCommentView, WCUserComment;

@protocol WCCommentViewDelegate <NSObject>

@optional
- (void)onCommentView:(WCCommentView *)arg1 didClickSpringIconButton:(UIButton *)arg2 commentUserInfo:(WCUserComment *)arg3;
- (void)onCommentViewTopicTagClicked:(WCUserComment *)arg1 query:(NSString *)arg2;
- (void)onRestoreCommentCellView:(WCUserComment *)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onWCCommentEmotionViewClick:(WCUserComment *)arg1;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
- (_Bool)isTouchEnableOnCommentView;
- (void)onCommentViewLongPressed:(WCCommentView *)arg1 withText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onCommentViewClicked:(WCCommentView *)arg1;
@end

