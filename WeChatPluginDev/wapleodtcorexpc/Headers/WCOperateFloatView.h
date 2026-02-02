//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UINavigationController, WCDataItem, WCLikeButton, WCOperateFloatViewParams;

@interface WCOperateFloatView : UIView
{
    WCDataItem *m_item;
    WCLikeButton *m_likeBtn;
    UIButton *m_commentBtn;
    UIImageView *m_bkgImageView;
    UIImageView *m_lineView;
    UIView *m_clipView;
    UILabel *m_tipLabel;
    UINavigationController *navigationController;
    _Bool _isEnhanceInteractionEnabled;
    _Bool _isPerformHideAnimation;
    CDUnknownBlockType _hideOperation;
    WCOperateFloatViewParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCOperateFloatViewParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool isPerformHideAnimation; // @synthesize isPerformHideAnimation=_isPerformHideAnimation;
@property(nonatomic) _Bool isEnhanceInteractionEnabled; // @synthesize isEnhanceInteractionEnabled=_isEnhanceInteractionEnabled;
@property(copy, nonatomic) CDUnknownBlockType hideOperation; // @synthesize hideOperation=_hideOperation;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
@property(readonly, nonatomic) UIButton *m_commentBtn; // @synthesize m_commentBtn;
@property(readonly, nonatomic) UIButton *m_likeBtn; // @synthesize m_likeBtn;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void)onLikeItem:(id)arg1;
- (void)hide;
- (void)animationDidStopHide;
- (void)animationDidStop;
- (void)showWithItemData:(id)arg1 tipPoint:(struct CGPoint)arg2;
- (void)updateBackgroundImageView:(_Bool)arg1;
- (void)updateCommmentButton:(_Bool)arg1;
- (void)initCommentButton;
- (void)initLineView;
- (void)initLikeButton;
- (id)initWithParams:(id)arg1;
- (double)buttonWidth:(id)arg1;

@end

