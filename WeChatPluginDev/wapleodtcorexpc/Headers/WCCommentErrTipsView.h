//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UIImageView, WCMomentsErrTipsViewModel;
@protocol WCCommentErrTipsViewDelegate;

@interface WCCommentErrTipsView : UIView
{
    WCMomentsErrTipsViewModel *_viewModel;
    id <WCCommentErrTipsViewDelegate> _delegate;
    RichTextView *_tipsTextView;
    UIButton *_customButton;
    UIImageView *_iconImageView;
    UIImageView *_backgroundImageView;
}

+ (double)heightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *customButton; // @synthesize customButton=_customButton;
@property(retain, nonatomic) RichTextView *tipsTextView; // @synthesize tipsTextView=_tipsTextView;
@property(nonatomic) __weak id <WCCommentErrTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WCMomentsErrTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onCustomButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateWithDataItem:(id)arg1;
- (void)updateErrImageView;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

