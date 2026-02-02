//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmotionProgressView, MMUIActivityIndicatorView, UIButton;
@protocol EmoticonStoreDownloadViewDelegate;

@interface EmoticonStoreDownloadView : UIView
{
    _Bool _useStaticWidth;
    _Bool _isCurrentBtnGrayForWecoin;
    id <EmoticonStoreDownloadViewDelegate> _delegate;
    UIButton *_mainBtn;
    MMUIActivityIndicatorView *_activityIndicatorView;
    EmotionProgressView *_progressView;
    UIButton *_downloadCancelBtn;
}

+ (double)calBtnLengthFor:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentBtnGrayForWecoin; // @synthesize isCurrentBtnGrayForWecoin=_isCurrentBtnGrayForWecoin;
@property(retain, nonatomic) UIButton *downloadCancelBtn; // @synthesize downloadCancelBtn=_downloadCancelBtn;
@property(retain, nonatomic) EmotionProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIButton *mainBtn; // @synthesize mainBtn=_mainBtn;
@property(nonatomic) _Bool useStaticWidth; // @synthesize useStaticWidth=_useStaticWidth;
@property(nonatomic) __weak id <EmoticonStoreDownloadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickActivityDownloadButton;
- (void)onCancelDownloadBtnClick;
- (void)onUnstallButtonClick;
- (void)onClickUseButton;
- (void)onClickRewardButton;
- (void)onClickButton;
- (void)onClickDownloadButton;
- (void)updateViewForDownloadingWithProgress:(float)arg1 andCancelBtn:(_Bool)arg2;
- (id)getPriceAttrStrWithPrice:(id)arg1 isHighLighted:(_Bool)arg2 standardFont:(id)arg3;
- (void)setPrice:(id)arg1 isWeCoin:(_Bool)arg2;
- (void)changeLoadingStateTo:(_Bool)arg1;
- (void)prepareForStateUpdate;
- (void)initCancelButton;
- (void)initDownloadProgressView;
- (void)genBtnFor:(long long)arg1;
- (void)changeBtnTo:(long long)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)loadSubView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

