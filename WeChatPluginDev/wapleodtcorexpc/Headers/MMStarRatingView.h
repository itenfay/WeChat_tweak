//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMStarRatingViewConfiguration;
@protocol MMStarRatingViewDelegate;

@interface MMStarRatingView : UIView
{
    id <MMStarRatingViewDelegate> _delegate;
    MMStarRatingViewConfiguration *_configuration;
    double _scorePercent;
    UIView *_foregroundContentView;
    UIView *_backgroundContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundContentView; // @synthesize backgroundContentView=_backgroundContentView;
@property(retain, nonatomic) UIView *foregroundContentView; // @synthesize foregroundContentView=_foregroundContentView;
@property(nonatomic) double scorePercent; // @synthesize scorePercent=_scorePercent;
@property(retain, nonatomic) MMStarRatingViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <MMStarRatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapRateView:(id)arg1;
- (id)createContentViewWithImage:(id)arg1;
- (void)setupSubviews;
- (id)initWithConfiguration:(id)arg1;

@end

