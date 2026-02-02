//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UIImage;

@interface MinimizeAudioTaskExtendCoverView : UIView
{
    unsigned int _style;
    UIImage *_image;
    double _fadeChangeTime;
    MMWebImageView *_coverView;
    MMWebImageView *_backgroundImageView;
    UIView *_backgroundGraintView;
}

+ (_Bool)automaticallyNotifiesObserversOfImage;
+ (id)keyPathsForValuesAffectingImage;
+ (struct CGSize)defaultSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundGraintView; // @synthesize backgroundGraintView=_backgroundGraintView;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) double fadeChangeTime; // @synthesize fadeChangeTime=_fadeChangeTime;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setDefaultImage:(id)arg1;
- (void)updateCurBgStyle:(unsigned int)arg1 image:(id)arg2 imageURL:(id)arg3;
- (void)setImage:(id)arg1 bgStyle:(unsigned int)arg2;
- (void)setImageURL:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

