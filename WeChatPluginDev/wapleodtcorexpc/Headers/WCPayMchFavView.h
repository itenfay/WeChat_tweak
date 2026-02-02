//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FollowCardBDMchInfo, MMUIActivityIndicatorView, MMUILabel, UIButton, WCPayWebImageView;
@protocol WCPayMchFavViewDelegate;

@interface WCPayMchFavView : UIView
{
    id <WCPayMchFavViewDelegate> _delegate;
    FollowCardBDMchInfo *_mchInfo;
    WCPayWebImageView *_mchLogoImgView;
    WCPayWebImageView *_mchLogoSelectedImgView;
    MMUILabel *_followTipsLabel;
    UIButton *_coverBtn;
    MMUIActivityIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) MMUILabel *followTipsLabel; // @synthesize followTipsLabel=_followTipsLabel;
@property(retain, nonatomic) WCPayWebImageView *mchLogoSelectedImgView; // @synthesize mchLogoSelectedImgView=_mchLogoSelectedImgView;
@property(retain, nonatomic) WCPayWebImageView *mchLogoImgView; // @synthesize mchLogoImgView=_mchLogoImgView;
@property(retain, nonatomic) FollowCardBDMchInfo *mchInfo; // @synthesize mchInfo=_mchInfo;
@property(nonatomic) __weak id <WCPayMchFavViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startLoading;
- (void)coverBtnClick;
- (void)updateMchFavViewWithSelectState:(_Bool)arg1;
- (id)initWithFollowMchInfo:(id)arg1 delegate:(id)arg2;

@end

