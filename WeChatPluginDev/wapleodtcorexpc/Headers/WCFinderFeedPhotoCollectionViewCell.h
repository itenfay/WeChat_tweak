//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UITapGestureRecognizer, WCFinderFeedImageEffectView, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderFullNewMultiMediaView, WCFinderMediaInfo;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderHalfScreenListenProtocol;

@interface WCFinderFeedPhotoCollectionViewCell : UICollectionViewCell
{
    _Bool _enableTapAction;
    _Bool _isSubScene;
    unsigned int _attrFuncFlag;
    double _loadingTopOffset;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate;
    WCFinderMediaInfo *_mediaInfo;
    WCFinderFullNewMultiMediaView *_mediaView;
    WCFinderFeedImageView *_imageContainer;
    unsigned long long _displayMode;
    WCFinderFeedImageEffectView *_imageEffectView;
    UITapGestureRecognizer *_likeGes;
    UITapGestureRecognizer *_tapGesture;
    WCFinderFeedMediaWrap *_mediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) WCFinderFeedImageEffectView *imageEffectView; // @synthesize imageEffectView=_imageEffectView;
@property(nonatomic) _Bool isSubScene; // @synthesize isSubScene=_isSubScene;
@property(nonatomic) _Bool enableTapAction; // @synthesize enableTapAction=_enableTapAction;
@property(nonatomic) unsigned int attrFuncFlag; // @synthesize attrFuncFlag=_attrFuncFlag;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) WCFinderFeedImageView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(nonatomic) __weak WCFinderFullNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) __weak id <WCFinderHalfScreenListenProtocol> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
- (void)halfScreenMoveProgressChanged;
- (_Bool)isMediaContentReady;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (id)getPhotoThumb;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)loadingRetry;
- (void)onFinderImageLoadSuccess:(id)arg1;
- (void)onFinderImageDownloadFail:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onLikeFeed:(id)arg1;
- (struct CGRect)getImageViewRectWithDetailFill;
- (struct CGRect)getImageViewRectWithFullScreen;
- (struct CGRect)getImageViewRectWithAspectFit;
- (struct CGRect)getImageViewRect;
- (void)reloadImage;
- (void)updateImageContainerFullScreenState;
- (void)setImage:(id)arg1 isThumb:(_Bool)arg2;
- (void)removeGestureIfNeeded;
- (void)setupGestureIfNeeded;
- (void)setUpUI;
- (void)layoutSubviews;
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

