//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface FavBannerTipBkgView : UIView
{
    UIImageView *m_oBkgImageView;
    UIImageView *m_oArrowImageView;
}

- (void).cxx_destruct;
- (void)setBgImageNormal;
- (void)setBgImageHl;
- (void)layoutSubviews;
- (void)initView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

