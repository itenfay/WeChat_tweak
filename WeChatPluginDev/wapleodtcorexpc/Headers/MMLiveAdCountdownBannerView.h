//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView;

@interface MMLiveAdCountdownBannerView
{
    MMUIImageView *_doneIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *doneIcon; // @synthesize doneIcon=_doneIcon;
- (_Bool)shouldShowAdsConfirmView;
- (void)countdownEndAnimate;
- (void)updateUIWithTime:(long long)arg1;
- (id)countdownLabelString;
- (void)layoutComponents;
- (void)setupSubviews;

@end

