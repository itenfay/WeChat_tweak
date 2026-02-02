//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, UIImageView, UILabel, UITapGestureRecognizer;

@interface MMMusicMVPostingStateView : UIView
{
    unsigned long long _state;
    CDUnknownBlockType _onTappedRetry;
    MMUIActivityIndicatorView *_postingIndicator;
    UILabel *_tooltipLabel;
    UIImageView *_failedImageView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(retain, nonatomic) UILabel *tooltipLabel; // @synthesize tooltipLabel=_tooltipLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *postingIndicator; // @synthesize postingIndicator=_postingIndicator;
@property(copy, nonatomic) CDUnknownBlockType onTappedRetry; // @synthesize onTappedRetry=_onTappedRetry;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)handleTapGesture;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)refreshSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

