//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UIButton;
@protocol MMScrollableActionSheetContainerDownStableViewDelegate;

@interface MMScrollableActionSheetContainerDownStableView
{
    UIButton *_cancelButton;
    id <MMScrollableActionSheetContainerDownStableViewDelegate> _delegate;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak id <MMScrollableActionSheetContainerDownStableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)onClickedCancelButton;
- (double)calcuateCancelButtonHeight;
- (void)layoutSubviews;
- (void)updateGradientLayerOpacity:(float)arg1;
- (void)setupGradientLayer;
- (void)setupCancelButton;
- (id)initWithDelegate:(id)arg1;

@end

