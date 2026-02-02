//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UIScrollView, WCFinderAnimationLoadingView, WXFullScreenGestureRecognizer;

@interface WCFinderFullScreenImageBrowseView : UIView
{
    UIImage *_originImage;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    WXFullScreenGestureRecognizer *_fullScreenGestrure;
    CDUnknownBlockType _dismissBlock;
    WCFinderAnimationLoadingView *_loadingView;
}

+ (void)showInWindow:(id)arg1 imageURL:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
+ (void)showInViewController:(id)arg1 imageURL:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure; // @synthesize fullScreenGestrure=_fullScreenGestrure;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_showInViewView:(id)arg1 imageURL:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)handleDoubleTap:(id)arg1;
- (void)layoutSubviews;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

