//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView, WCFinderAnimationLoadingView;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageEffectView : UIView
{
    double _loadingTopOffset;
    id <WCFinderFeedImageViewProtocol> _delegate;
    UIVisualEffectView *_visualView;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIVisualEffectView *visualView; // @synthesize visualView=_visualView;
@property(nonatomic) __weak id <WCFinderFeedImageViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
- (void)onClickRetry:(id)arg1;
- (void)onStateOfError;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)setRetryVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

