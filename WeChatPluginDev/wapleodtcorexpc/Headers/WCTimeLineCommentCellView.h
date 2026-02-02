//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIView, WCCommentViewFB, WCDataItem;
@protocol ILinkEventExt, WCTimeLineCommentCellViewDelegate;

@interface WCTimeLineCommentCellView
{
    long long _iSection;
    long long _iRow;
    WCDataItem *_mainDataItem;
    id <WCTimeLineCommentCellViewDelegate> m_delegate;
    id <ILinkEventExt> m_urlDelegate;
    UIView *m_likeContainer;
    UIView *m_lineView;
    WCCommentViewFB *m_commentView;
    _Bool m_bHaveActionSheet;
    _Bool m_isFoldCommentclk;
    _Bool _needTopRoundCorner;
    _Bool _needBottomRoundCorner;
    NSMutableArray *_hasNewStoryArray;
    UIView *_accessibilityView;
}

+ (_Bool)GetIsLastCommentOrLikeCell:(id)arg1 RowIndex:(long long)arg2;
+ (_Bool)GetIsCommentCellRow:(id)arg1 RowIndex:(long long)arg2;
+ (unsigned long long)getCommentViewCountForDataItem:(id)arg1;
+ (double)getCommentViewLeftMarginCurOri;
+ (double)getCommentViewWidth;
+ (_Bool)isLastComment:(id)arg1 RowIndex:(long long)arg2;
+ (long long)getCommentIndexForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (double)getCellHeightForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (id)getNickNameForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(nonatomic) _Bool needBottomRoundCorner; // @synthesize needBottomRoundCorner=_needBottomRoundCorner;
@property(nonatomic) _Bool needTopRoundCorner; // @synthesize needTopRoundCorner=_needTopRoundCorner;
@property(retain, nonatomic) NSMutableArray *hasNewStoryArray; // @synthesize hasNewStoryArray=_hasNewStoryArray;
@property(nonatomic) __weak id <ILinkEventExt> m_urlDelegate; // @synthesize m_urlDelegate;
@property(nonatomic) __weak id <WCTimeLineCommentCellViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) WCDataItem *mainDataItem; // @synthesize mainDataItem=_mainDataItem;
@property(nonatomic) long long iRow; // @synthesize iRow=_iRow;
@property(nonatomic) long long iSection; // @synthesize iSection=_iSection;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 commentUserInfo:(id)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFulltextBtnClick:(id)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onCommentViewClicked:(id)arg1;
- (void)onCommentViewDelete:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showReplyCommentOption:(id)arg1 userInfo:(id)arg2;
- (void)showDeleteFriendsCommentOption:(id)arg1 userInfo:(id)arg2 index:(long long)arg3;
- (void)showDeleteSelfCommentOption:(id)arg1 userInfo:(id)arg2 index:(long long)arg3;
- (void)showCommentClickOption:(id)arg1;
- (void)showCommentDeleteOption:(id)arg1;
- (void)deleteComment:(unsigned long long)arg1;
- (void)setRoundCorner;
- (void)initAccessibilityViewWithAccessibilityLabel:(id)arg1;
- (void)initView;
- (void)initAdFireworkCheerPaddingView;
- (void)initLineView;
- (void)initHasNewStoryArray;
- (void)checkAdSocialLikeIcon:(id)arg1;
- (void)initLikeContainer;
- (void)reportCommentFoldClk;
- (id)getShowComment;
- (_Bool)isShowLikeCell;
- (id)initWithUrlDelegate:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

