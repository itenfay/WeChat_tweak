//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, NSString, RichTextView, UIButton, UILabel, UIView, UIVisualEffectView;
@protocol MMFinderLivePaymentPolicyIntroViewDelegate;

@interface MMFinderLivePaymentPolicyIntroView
{
    _Bool _forAnchor;
    id <MMFinderLivePaymentPolicyIntroViewDelegate> _operationDelegate;
    RichTextView *_introDetailLabel;
    UIView *_contentView;
    UILabel *_introTitleLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *introTitleLabel; // @synthesize introTitleLabel=_introTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) RichTextView *introDetailLabel; // @synthesize introDetailLabel=_introDetailLabel;
@property(nonatomic) __weak id <MMFinderLivePaymentPolicyIntroViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) _Bool forAnchor; // @synthesize forAnchor=_forAnchor;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)updateIntroDetailLabel;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

