//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonBoardView, MMGrowTextView, MMTableView, MMUIButton, MMUILabel, MMUIViewController, MPCommentTableViewLogic, MPLandingPageCgiHandler, MPLandingPageOpenParameter, NSString, RichTextView, UIImageView, WCInputController, WCTimeLineFooterView;
@protocol MPCommentEditViewDelegate;

@interface MPCommentEditView : UIView
{
    _Bool _isReplyModeEnable;
    _Bool _isSendingComment;
    _Bool _isMultiReplySwitchOn;
    unsigned int _enterId;
    unsigned int _personalCommentId;
    unsigned int _itemShowType;
    unsigned int _theme;
    double _defaultHeight;
    id <MPCommentEditViewDelegate> _delegate;
    MMUIViewController *_viewController;
    NSString *_replyContent;
    NSString *_url;
    unsigned long long _commentTopicId;
    UIView *_navBarView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeBtn;
    MMUIButton *_commitBtn;
    MMTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_myCommentTitleBarView;
    MMUILabel *_myCommentTitleLabel;
    MMGrowTextView *_textView;
    WCTimeLineFooterView *_footerView;
    UIView *_footerViewExtentFGView;
    RichTextView *_replyTipsTextView;
    UIView *_replyTipsBgView;
    MPCommentTableViewLogic *_commentTableViewLogic;
    MPLandingPageCgiHandler *_cgiHandler;
    MPLandingPageOpenParameter *_openParam;
    UIView *_bgMaskView;
    double _contentOffsetYWhenBeginDragging;
    double _textViewAjustHeight;
    WCInputController *_inputController;
    EmoticonBoardView *_emoticonBoardView;
    UIImageView *_inputView;
    MMUIButton *_expressionBtn;
    MMUIButton *_collapseBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMultiReplySwitchOn; // @synthesize isMultiReplySwitchOn=_isMultiReplySwitchOn;
@property(retain, nonatomic) MMUIButton *collapseBtn; // @synthesize collapseBtn=_collapseBtn;
@property(retain, nonatomic) MMUIButton *expressionBtn; // @synthesize expressionBtn=_expressionBtn;
@property(retain, nonatomic) UIImageView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) _Bool isSendingComment; // @synthesize isSendingComment=_isSendingComment;
@property(nonatomic) double textViewAjustHeight; // @synthesize textViewAjustHeight=_textViewAjustHeight;
@property(nonatomic) double contentOffsetYWhenBeginDragging; // @synthesize contentOffsetYWhenBeginDragging=_contentOffsetYWhenBeginDragging;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) MPLandingPageOpenParameter *openParam; // @synthesize openParam=_openParam;
@property(retain, nonatomic) MPLandingPageCgiHandler *cgiHandler; // @synthesize cgiHandler=_cgiHandler;
@property(retain, nonatomic) MPCommentTableViewLogic *commentTableViewLogic; // @synthesize commentTableViewLogic=_commentTableViewLogic;
@property(retain, nonatomic) UIView *replyTipsBgView; // @synthesize replyTipsBgView=_replyTipsBgView;
@property(retain, nonatomic) RichTextView *replyTipsTextView; // @synthesize replyTipsTextView=_replyTipsTextView;
@property(retain, nonatomic) UIView *footerViewExtentFGView; // @synthesize footerViewExtentFGView=_footerViewExtentFGView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMUILabel *myCommentTitleLabel; // @synthesize myCommentTitleLabel=_myCommentTitleLabel;
@property(retain, nonatomic) UIView *myCommentTitleBarView; // @synthesize myCommentTitleBarView=_myCommentTitleBarView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) unsigned long long commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(nonatomic) unsigned int personalCommentId; // @synthesize personalCommentId=_personalCommentId;
@property(nonatomic) _Bool isReplyModeEnable; // @synthesize isReplyModeEnable=_isReplyModeEnable;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MPCommentEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
- (void)doExposeReport:(unsigned int)arg1;
- (void)resetReplyMode;
- (void)onTapCommentEditMaskView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reloadexpressionBtnImage:(long long)arg1;
- (void)onCollapseBtnClicked;
- (void)onExpressionBtnClicked:(id)arg1;
- (void)onClickCloseBtn;
- (void)onClickCommitBtn;
- (void)clearTextView;
- (double)getVisibleHeight;
- (void)updateHeightWhenKeyboardShowWithAnimated:(_Bool)arg1;
- (void)keyboardWillShow;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onDeleteCommentMsgReply:(id)arg1 commentReply:(id)arg2;
- (void)onDeleteCommentMsg:(id)arg1;
- (void)setupReplyContentView:(id)arg1 commentId:(unsigned int)arg2;
- (void)onCommentReplyClick:(id)arg1 commentReply:(id)arg2;
- (void)onTopicReplyClick:(id)arg1;
- (void)onRefreshCommentTableView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)replyTextViewStypes:(id)arg1;
- (id)inputToolViewCloseTintColor;
- (id)inputToolViewTintColor;
- (id)inputToolViewBackgroundColor;
- (void)updateInputControllerTheme;
- (void)updateTableViewTheme;
- (void)updateNavBarTheme;
- (void)updateSubviewTheme;
- (void)layoutSubviews;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)initInputController;
- (void)updateBottomView;
- (void)updateLoadingViewState;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initNavBarView;
- (void)initBgMaskView;
- (void)initSubviews;
- (void)endEdit;
- (void)beginEdit;
- (void)updateMyCommentList;
- (void)initTableViewLogic;
- (void)initCgiHandlerWithEnterId:(unsigned int)arg1;
- (void)setHiddenWithAnimation:(_Bool)arg1;
- (void)tryFetchMoreComment;
- (void)clearAndFetchComment;
- (unsigned int)currentTheme;
- (id)initWithViewController:(id)arg1 openParam:(id)arg2 enterId:(unsigned int)arg3 theme:(unsigned int)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

