//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class FavBannerTipBkgView, MMUILabel, UIImageView, UILabel;
@protocol FavWarningBannerViewDelegate;

@interface FavWarningBannerView : UIButton
{
    UILabel *m_textLabel;
    FavBannerTipBkgView *m_bkgView;
    MMUILabel *m_favCapacityMsg;
    UIImageView *m_imageView;
    int bannerType;
    id <FavWarningBannerViewDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int bannerType; // @synthesize bannerType;
@property(nonatomic) __weak id <FavWarningBannerViewDelegate> delegate; // @synthesize delegate;
- (void)relayoutViews;
- (id)getCapacityString;
- (void)resetFavCapacityMsg;
- (void)initText;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

