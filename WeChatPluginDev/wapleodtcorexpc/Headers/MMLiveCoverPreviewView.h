//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UIScrollView, WXFullScreenGestureRecognizer;

@interface MMLiveCoverPreviewView : UIView
{
    UIImage *_originImage;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    WXFullScreenGestureRecognizer *_fullScreenGestrure;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure; // @synthesize fullScreenGestrure=_fullScreenGestrure;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)showInViewController:(id)arg1;
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

