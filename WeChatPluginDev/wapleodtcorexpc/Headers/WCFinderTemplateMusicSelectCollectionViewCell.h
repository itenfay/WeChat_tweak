//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUIImageView, UILabel, UIView, WCStoryLyricWaveView;

@interface WCFinderTemplateMusicSelectCollectionViewCell : UICollectionViewCell
{
    UIView *_gradientMaskView;
    CAGradientLayer *_gradientLayer;
    UILabel *_infoLabel;
    MMUIImageView *_imageView;
    WCStoryLyricWaveView *_waveView;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) __weak WCStoryLyricWaveView *waveView; // @synthesize waveView=_waveView;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
- (void)stopLyricAnimation;
- (void)startLyricAnimation;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setSelectState:(_Bool)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

