//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, SightIconView, UIImage;

@interface WABGAudioMinimizationCoverView : UIView
{
    long long _state;
    MMWebImageView *_coverView;
    MMWebImageView *_backgroundImageView;
    UIView *_failureTipsView;
    SightIconView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *failureTipsView; // @synthesize failureTipsView=_failureTipsView;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)stopLoading;
- (void)startLoading;
@property(retain, nonatomic) UIImage *image;
- (void)updateCurBgImage:(id)arg1 imageURL:(id)arg2;
- (void)setDefaultImage;
- (void)setImageURL:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

