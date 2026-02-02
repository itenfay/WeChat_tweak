//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageView : UIView
{
    id <WCFinderFeedImageViewProtocol> _delegate;
    double _loadingTopOffset;
    double _imageHeightWidRatio;
    UIImageView *_imageView;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double imageHeightWidRatio; // @synthesize imageHeightWidRatio=_imageHeightWidRatio;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) __weak id <WCFinderFeedImageViewProtocol> delegate; // @synthesize delegate=_delegate;
- (id)getFeedImage;
- (_Bool)isAnimating;
- (void)resumeLoadingAnimationIfNeeded;
- (void)hiddenLoadingAnimationIfNeeded;
- (void)onClickRetry:(id)arg1;
- (_Bool)isExistImage;
- (void)onStateOfError;
- (void)onStateOfNormal:(id)arg1;
- (void)onStateOfLoading;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)setRetryVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateImageViewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

