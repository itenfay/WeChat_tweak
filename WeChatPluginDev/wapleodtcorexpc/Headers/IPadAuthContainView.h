//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIButton, UIImageView, UILabel;
@protocol IPadAuthContainViewDelegate;

@interface IPadAuthContainView : UIView
{
    double _limitWidth;
    id <IPadAuthContainViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_qrcodeImgView;
    UILabel *_appNameLabel;
    UIView *_dividingLine;
    UILabel *_tailLabel;
    MMUIButton *_cancelBtn;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UIView *_scannedMaskView;
    UIImageView *_scannedTipsIconView;
    UIView *_refreshMaskView;
    UIImageView *_refreshIconView;
    UILabel *_refreshTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *refreshTipsLabel; // @synthesize refreshTipsLabel=_refreshTipsLabel;
@property(retain, nonatomic) UIImageView *refreshIconView; // @synthesize refreshIconView=_refreshIconView;
@property(retain, nonatomic) UIView *refreshMaskView; // @synthesize refreshMaskView=_refreshMaskView;
@property(retain, nonatomic) UIImageView *scannedTipsIconView; // @synthesize scannedTipsIconView=_scannedTipsIconView;
@property(retain, nonatomic) UIView *scannedMaskView; // @synthesize scannedMaskView=_scannedMaskView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIImageView *qrcodeImgView; // @synthesize qrcodeImgView=_qrcodeImgView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IPadAuthContainViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
- (void)onTapRefreshMaskView;
- (void)onCancelBtnClicked;
- (void)layoutSubviews;
- (void)updateWithQRCodeData:(id)arg1 appName:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)onQRCodeExpired;
- (void)onQRCodeScanned;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

