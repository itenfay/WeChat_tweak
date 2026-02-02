//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveAccountInfo, MMUIButton, MMUILabel, MMWebImageView, UIButton, UILabel, UIView;

@interface MMFinderLiveMessageAccountRemindPageSheet
{
    _Bool _isContinue;
    UIView *_contentView;
    MMWebImageView *_headImageView;
    UILabel *_labelView;
    MMUILabel *_titleLabel;
    MMUIButton *_continueButton;
    UIButton *_cancelButton;
    CAShapeLayer *_shapeLayer;
    UIView *_separateViewTop;
    UIView *_separateViewDown;
    MMFinderLiveAccountInfo *_accountInfo;
    CDUnknownBlockType _completion;
}

+ (void)showWithAccountInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMFinderLiveAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(retain, nonatomic) UIView *separateViewDown; // @synthesize separateViewDown=_separateViewDown;
@property(retain, nonatomic) UIView *separateViewTop; // @synthesize separateViewTop=_separateViewTop;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onCancelButtonClicked;
- (void)onContinueButtonClicked;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)updateData;
- (void)initUI;
- (id)initWithAccountInfo:(id)arg1;

@end

