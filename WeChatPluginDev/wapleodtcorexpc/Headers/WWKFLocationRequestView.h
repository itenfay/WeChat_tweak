//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMUIButton, MMUILabel, UIButton;
@protocol WWKFLocationRequestViewDelegate;

@interface WWKFLocationRequestView
{
    CContact *_contact;
    id <WWKFLocationRequestViewDelegate> _delegate;
    MMHeadImageView *_headView;
    MMUILabel *_headerTitleLabel;
    MMUILabel *_contentTitleLabel;
    MMUILabel *_contentSubTitleLabel;
    UIButton *_rejectButton;
    UIButton *_approveButton;
    MMUIButton *_learnMoreButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIButton *approveButton; // @synthesize approveButton=_approveButton;
@property(retain, nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) MMUILabel *contentSubTitleLabel; // @synthesize contentSubTitleLabel=_contentSubTitleLabel;
@property(retain, nonatomic) MMUILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) MMUILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak id <WWKFLocationRequestViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onLearnMore;
- (void)onApprove;
- (void)onReject;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateView;
- (void)setupLayout;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

