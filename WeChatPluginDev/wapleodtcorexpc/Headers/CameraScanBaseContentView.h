//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanTabView, UIButton, UILabel, UIView;
@protocol CameraScanBaseContentViewDelegate;

@interface CameraScanBaseContentView
{
    id <CameraScanBaseContentViewDelegate> _delegate;
    UILabel *_centerLabel;
    UIButton *_closeButton;
    UILabel *_infoLabel;
    UIButton *_torchButton;
    UILabel *_torchLabel;
    UIView *_albumButtonWrapView;
    CameraScanTabView *_tabView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CameraScanTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak UIView *albumButtonWrapView; // @synthesize albumButtonWrapView=_albumButtonWrapView;
@property(nonatomic) __weak UILabel *torchLabel; // @synthesize torchLabel=_torchLabel;
@property(nonatomic) __weak UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(nonatomic) __weak id <CameraScanBaseContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getTabViewHeight;
- (struct CGPoint)areaCenterAboveTabView;
- (struct CGSize)areaSizeAboveTabView;
- (void)layoutSubviews;
- (void)setCenterLabelHidden:(_Bool)arg1 bAnim:(_Bool)arg2;
- (void)setupCenterLabel:(id)arg1;
- (id)init;

@end

