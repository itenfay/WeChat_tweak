//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUILabel, UIView, WCFinderFeedImageCDNView;

@interface WCFinderFeedPickerCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageCDNView *_coverImageView;
    CAGradientLayer *_maskLayer;
    MMUILabel *_timeLabel;
    UIView *_unenableMask;
}

+ (double)cellHeightWidthWidth:(double)arg1;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *unenableMask; // @synthesize unenableMask=_unenableMask;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) _Bool enable;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

