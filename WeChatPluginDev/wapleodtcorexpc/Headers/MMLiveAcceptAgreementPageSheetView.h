//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMUIButton, MMUILabel, NSString, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol MMLiveAcceptAgreementPageSheetViewDelegate;

@interface MMLiveAcceptAgreementPageSheetView
{
    id <MMLiveAcceptAgreementPageSheetViewDelegate> _operationDelegate;
    CDUnknownBlockType _actionButtonClickedBlock;
    UILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_actionButton;
    UIView *_contentView;
    UIImageView *_iconView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
    MMUIButton *_closeBtn;
    NSString *_title;
    NSString *_desc;
    NSString *_actionBtnText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionBtnText; // @synthesize actionBtnText=_actionBtnText;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType actionButtonClickedBlock; // @synthesize actionButtonClickedBlock=_actionButtonClickedBlock;
@property(nonatomic) __weak id <MMLiveAcceptAgreementPageSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onClickLeftButton:(id)arg1;
- (void)onActionButtonClicked;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 desc:(id)arg2 actionBtnText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

