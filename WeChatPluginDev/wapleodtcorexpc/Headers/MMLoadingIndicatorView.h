//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMLoadingIndicatorView : UIView
{
    _Bool _isLoading;
    UIImageView *_loadingIndicator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIImageView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)stopAnimation;
- (void)startAnimation;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

