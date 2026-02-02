//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, NSArray, NSString, UIImageView;

@interface MMAssetICloudLoadingView : UIView
{
    _Bool _isLoadFail;
    _Bool _useShortTitle;
    NSString *_title;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_loadingDotLabel;
    MMTimer *_animateTimer;
    long long _animateDotIndex;
    NSArray *_animateDots;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useShortTitle; // @synthesize useShortTitle=_useShortTitle;
@property(retain, nonatomic) NSArray *animateDots; // @synthesize animateDots=_animateDots;
@property(nonatomic) long long animateDotIndex; // @synthesize animateDotIndex=_animateDotIndex;
@property(retain, nonatomic) MMTimer *animateTimer; // @synthesize animateTimer=_animateTimer;
@property(retain, nonatomic) MMUILabel *loadingDotLabel; // @synthesize loadingDotLabel=_loadingDotLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isLoadFail; // @synthesize isLoadFail=_isLoadFail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)currentTitle;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)onDotAnimateUpdate;
- (void)stopDotAnimation;
- (void)startDotAnimation;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

