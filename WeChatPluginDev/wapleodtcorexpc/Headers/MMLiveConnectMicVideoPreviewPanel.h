//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, NSString, UILabel, UITapGestureRecognizer, WCLiveVideoView;
@protocol MMLiveConnectMicVideoPreviewPanelDelegate;

@interface MMLiveConnectMicVideoPreviewPanel : UIView
{
    id <MMLiveConnectMicVideoPreviewPanelDelegate> _delegate;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    WCLiveVideoView *_videoView;
    UIView *_videoContainerView;
    UILabel *_titleLabel;
    CAGradientLayer *_videoTextBackgroundLayer;
    UILabel *_videoTextLabel;
    MMUIButton *_cancelButton;
    MMUIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *videoTextLabel; // @synthesize videoTextLabel=_videoTextLabel;
@property(retain, nonatomic) CAGradientLayer *videoTextBackgroundLayer; // @synthesize videoTextBackgroundLayer=_videoTextBackgroundLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) WCLiveVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <MMLiveConnectMicVideoPreviewPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closeActionWithConfirmed:(_Bool)arg1;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
- (void)onTapNotPanelArea;
- (void)showPanelWithVideoView:(id)arg1;
- (void)updatePanelViews;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

