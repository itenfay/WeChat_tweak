//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMUILabel, UIButton, UIView;
@protocol MMHalfScreenGuideViewDelegate;

@interface MMHalfScreenGuideView
{
    _Bool _dismissesWhenCancelButtonClicked;
    _Bool _dismissesWhenAcceptButtonClicked;
    id <MMHalfScreenGuideViewDelegate> _delegate;
    UIView *_customizedTopView;
    MMUILabel *_titleLabel;
    MMUILabel *_messageLabel;
    UIView *_customizedContentView;
    UIButton *_cancelButton;
    UIButton *_acceptButton;
    CDUnknownBlockType _cancelButtonDidClickBlock;
    CDUnknownBlockType _acceptButtonDidClickBlock;
    double _contentPaddingX;
    double _contentPaddingTop;
    double _contentPaddingBottom;
    double _titleLabelMarginTopFollowedCustomizedTopView;
    double _labelSpacingY;
    double _customizedContentMarginTop;
    double _buttonSpacingX;
    double _buttonMarginTopFollowedLabel;
    double _buttonMarginTopFollowedCustomizedContent;
    UIView *_contentView;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double buttonMarginTopFollowedCustomizedContent; // @synthesize buttonMarginTopFollowedCustomizedContent=_buttonMarginTopFollowedCustomizedContent;
@property(nonatomic) double buttonMarginTopFollowedLabel; // @synthesize buttonMarginTopFollowedLabel=_buttonMarginTopFollowedLabel;
@property(nonatomic) double buttonSpacingX; // @synthesize buttonSpacingX=_buttonSpacingX;
@property(nonatomic) double customizedContentMarginTop; // @synthesize customizedContentMarginTop=_customizedContentMarginTop;
@property(nonatomic) double labelSpacingY; // @synthesize labelSpacingY=_labelSpacingY;
@property(nonatomic) double titleLabelMarginTopFollowedCustomizedTopView; // @synthesize titleLabelMarginTopFollowedCustomizedTopView=_titleLabelMarginTopFollowedCustomizedTopView;
@property(nonatomic) double contentPaddingBottom; // @synthesize contentPaddingBottom=_contentPaddingBottom;
@property(nonatomic) double contentPaddingTop; // @synthesize contentPaddingTop=_contentPaddingTop;
@property(nonatomic) double contentPaddingX; // @synthesize contentPaddingX=_contentPaddingX;
@property(copy, nonatomic) CDUnknownBlockType acceptButtonDidClickBlock; // @synthesize acceptButtonDidClickBlock=_acceptButtonDidClickBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonDidClickBlock; // @synthesize cancelButtonDidClickBlock=_cancelButtonDidClickBlock;
@property(nonatomic) _Bool dismissesWhenAcceptButtonClicked; // @synthesize dismissesWhenAcceptButtonClicked=_dismissesWhenAcceptButtonClicked;
@property(nonatomic) _Bool dismissesWhenCancelButtonClicked; // @synthesize dismissesWhenCancelButtonClicked=_dismissesWhenCancelButtonClicked;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *customizedContentView; // @synthesize customizedContentView=_customizedContentView;
@property(retain, nonatomic) MMUILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customizedTopView; // @synthesize customizedTopView=_customizedTopView;
@property(nonatomic) __weak id <MMHalfScreenGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)acceptButtonDidClick:(id)arg1;
- (void)cancelButtonDidClick:(id)arg1;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)updateContentShape;
- (void)layoutCustomizedContentView;
- (void)layoutCustomizedTopView;
- (void)layoutSubviews;
- (id)createAcceptButton;
- (id)createCancelButton;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (id)init;

@end

