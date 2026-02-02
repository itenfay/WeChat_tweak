//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, MMUILabel, MMWebImageView, MPCommentBaseCellViewModel, RichTextView, UIView;
@protocol MPCommentViewCellDelegate;

@interface MPCommentBaseCellView : UITableViewCell
{
    MMWebImageView *m_headImageView;
    MMUILabel *m_nickNameLabel;
    MMUILabel *m_tipsLabel;
    MMUIButton *m_likeButton;
    RichTextView *m_contentLabel;
    MMUIButton *m_deleteBtn;
    MMUIButton *m_replyBtn;
    UIView *m_dividerView;
    MPCommentBaseCellViewModel *_viewModel;
    id <MPCommentViewCellDelegate> _viewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MPCommentViewCellDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(readonly, nonatomic) MPCommentBaseCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateLikeBtn;
- (void)onClickLikeBtn;
- (void)onClickReplyBtn;
- (void)onClickDeleteBtn;
- (void)layoutButtons;
- (void)initReplyBtn;
- (void)initDividerView;
- (void)initTipsLabel;
- (void)initLikeBtn;
- (void)initDeleteBtn;
- (void)initContentLabel;
- (void)initNicknameLabel;
- (void)initHeadImageView;
- (void)initSubViews;
- (void)updateWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

