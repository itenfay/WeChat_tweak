//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, WCPayF2FReceiveModalViewData, WCPayWebImageView;
@protocol WCPayF2FReceiveModalViewDelegate;

@interface WCPayF2FReceiveModalView : UIView
{
    id <WCPayF2FReceiveModalViewDelegate> _delegate;
    WCPayF2FReceiveModalViewData *_viewModel;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIView *_qrcodeImageView;
    UIButton *_closeBtn;
    UIButton *_confirmBtn;
    UIView *_seperateLine;
    UIView *_receviewContentView;
    UIView *_containerView;
    UIView *_headerView;
    WCPayWebImageView *_headImageView;
    UILabel *_tipsLabel;
    UILabel *_valueLabel;
    UIImageView *_qrcodeImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *qrcodeImage; // @synthesize qrcodeImage=_qrcodeImage;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCPayWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *receviewContentView; // @synthesize receviewContentView=_receviewContentView;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *qrcodeImageView; // @synthesize qrcodeImageView=_qrcodeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WCPayF2FReceiveModalViewData *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCPayF2FReceiveModalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)headerImageWithPayIcon;
- (void)handleTap:(id)arg1;
- (void)dissmissView;
- (void)showInView;
- (id)imageFromView:(id)arg1;
- (id)genQrCodeImage;
- (id)getQrcodeImageView;
- (void)onTapConfirmBtn;
- (void)onTapCloseBtn;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithViewData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

