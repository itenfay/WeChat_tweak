//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ColorGradientView, EmotionBannerSet, MMUILabel, MMWebImageView;

@interface StoreEmotionBannerView : UIView
{
    EmotionBannerSet *_banner;
    MMUILabel *_titleLabel;
    MMUILabel *_markLabel;
    UIView *_markBgView;
    MMWebImageView *_coverImageView;
    ColorGradientView *_gradientView;
}

+ (struct CGSize)size;
- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *markBgView; // @synthesize markBgView=_markBgView;
@property(retain, nonatomic) MMUILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EmotionBannerSet *banner; // @synthesize banner=_banner;
- (id)getDynamicColorFrom:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

