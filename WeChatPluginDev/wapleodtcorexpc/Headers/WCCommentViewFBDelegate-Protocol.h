//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCCommentViewFB, WCUserComment;

@protocol WCCommentViewFBDelegate <NSObject>

@optional
- (void)onCommentView:(WCCommentViewFB *)arg1 didClickSpringIconButton:(UIButton *)arg2 commentUserInfo:(WCUserComment *)arg3;
- (void)onCommentViewChangeTranslateLanguage:(WCCommentViewFB *)arg1 commentUserInfo:(WCUserComment *)arg2;
- (void)onCommentViewTopicTagClicked:(WCUserComment *)arg1 query:(NSString *)arg2;
- (void)onCommentViewEmotionViewSingleClicked:(WCUserComment *)arg1 withRect:(struct CGRect)arg2;
- (void)onFulltextBtnClick:(WCUserComment *)arg1;
- (void)onRestoreCommentCellView:(WCUserComment *)arg1;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
- (void)onCommentViewClicked:(WCCommentViewFB *)arg1;
- (void)onCommentViewDelete:(WCCommentViewFB *)arg1;
@end

