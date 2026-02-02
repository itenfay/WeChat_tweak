//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UIScrollView, WCFinderFullScreenAvatarConfig, WXFullScreenGestureRecognizer;

@interface WCFinderFullScreenAvatarView : UIView
{
    _Bool _loading;
    UIImage *_originImage;
    WCFinderFullScreenAvatarConfig *_config;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    WXFullScreenGestureRecognizer *_fullScreenGestrure;
    CDUnknownBlockType _dismissBlock;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure; // @synthesize fullScreenGestrure=_fullScreenGestrure;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCFinderFullScreenAvatarConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)showMoreActionIfNeed;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)displayWithContact:(id)arg1 placeholder:(id)arg2;
- (void)showInViewController:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)layoutSubviews;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

