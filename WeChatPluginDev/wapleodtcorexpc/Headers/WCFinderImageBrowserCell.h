//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIPanGestureRecognizer, UIScrollView, WCFinderFeedImageEffectView, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderMediaInfo;
@protocol WCFinderImageBrowserCellDelegate;

@interface WCFinderImageBrowserCell : UICollectionViewCell
{
    _Bool _panInteracting;
    id <WCFinderImageBrowserCellDelegate> _delegate;
    WCFinderMediaInfo *_mediaInfo;
    UIScrollView *_imageScrollView;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderFeedImageView *_imageContainer;
    WCFinderFeedImageEffectView *_imageEffectView;
    UIPanGestureRecognizer *_panGesture;
    double _loadingTopOffset;
    struct CGPoint _panStartPoint;
}

- (void).cxx_destruct;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) _Bool panInteracting; // @synthesize panInteracting=_panInteracting;
@property(nonatomic) struct CGPoint panStartPoint; // @synthesize panStartPoint=_panStartPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) WCFinderFeedImageEffectView *imageEffectView; // @synthesize imageEffectView=_imageEffectView;
@property(retain, nonatomic) WCFinderFeedImageView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) __weak id <WCFinderImageBrowserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)loadingRetry;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (struct CGRect)getImageViewRect;
- (double)maxZoomScaleWithImageSize:(struct CGSize)arg1;
- (void)restoreInteractionWithDuration:(double)arg1;
- (void)onFinderImageDownloadFail:(id)arg1;
- (void)onFinderImageLoadSuccess:(id)arg1;
- (void)setImage:(id)arg1 isThumb:(_Bool)arg2;
- (void)reloadImage;
- (void)updateImageLayout;
- (void)respondsToPanGesture:(id)arg1;
- (void)respondsToTapDoubleGesture:(id)arg1;
- (void)respondsToTapSingleGesture:(id)arg1;
- (void)layoutSubviews;
- (void)setupGestures;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

