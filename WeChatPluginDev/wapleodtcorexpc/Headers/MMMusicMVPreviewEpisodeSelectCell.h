//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, MMMusicMVTrackItem, MMWebImageView, UILabel, UIView;

@interface MMMusicMVPreviewEpisodeSelectCell : UICollectionViewCell
{
    _Bool _isDoingAnimation;
    unsigned int _maskLayerViewAnimationDuration;
    MMWebImageView *_imageView;
    UILabel *_durationLabel;
    MMMusicMVTrackItem *_trackItem;
    CAShapeLayer *_borderLayer;
    UIView *_maskLayerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDoingAnimation; // @synthesize isDoingAnimation=_isDoingAnimation;
@property(nonatomic) unsigned int maskLayerViewAnimationDuration; // @synthesize maskLayerViewAnimationDuration=_maskLayerViewAnimationDuration;
@property(retain, nonatomic) UIView *maskLayerView; // @synthesize maskLayerView=_maskLayerView;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) MMMusicMVTrackItem *trackItem; // @synthesize trackItem=_trackItem;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)startMaskLayerViewAnimation;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

