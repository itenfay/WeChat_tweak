//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, UIView, WCDataItem, WCUserComment;

@protocol WCTimeLineCommentCellViewDelegate <NSObject>
- (void)onCommentViewChangeTranslateLanguage:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onCommentViewTopicTagClicked:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2 query:(NSString *)arg3;
- (void)onCommentViewEmotionViewSingleClicked:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2 withRect:(struct CGRect)arg3;
- (void)onRestoreCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onReloadCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onReplyComment:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2 ofTouchedView:(UIView *)arg3;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onWCTimeLineCommentCellOpenFullText:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;

@optional
- (void)onCommentView:(WCUserComment *)arg1 didClickSpringIconButton:(UIButton *)arg2 ofDataItem:(WCDataItem *)arg3;
- (void)onCommentViewDidShowDeleteSelfCommentOption:(WCUserComment *)arg1;
@end

