//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAnimatedImageDecoder, MMWebImageRequest, MMWebImageViewChainModel, NSObject, UIImage, UIView;
@protocol MMWebImageViewDelegate, OS_dispatch_queue;

@interface MMWebImageView
{
    UIImage *_defaultImage;
    _Bool _loadCachedImageFileOnMainThread;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    UIImage *m_cacheImage;
    NSObject<OS_dispatch_queue> *m_scaleQueue;
    _Bool _asyncWaitSubThreadLoadDataIfNotInCacheYet;
    _Bool _isImageStatic;
    _Bool _autoScale;
    _Bool _shouldShowWxamMark;
    _Bool _alwaysTemplateRenderingMode;
    _Bool _ignoreEmptyDefaultImage;
    _Bool _useDissloveImageUpdate;
    id <MMWebImageViewDelegate> m_loadingDelegate;
    CDUnknownBlockType _downloadTaskGenerator;
    CDUnknownBlockType _imageTaskEventObserversGenerator;
    double _imageScale;
    UIImage *_lastedImageSnapShot;
    MMWebImageRequest *_imageRequest;
}

+ (id)getLoadedImageData:(id)arg1;
+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(retain, nonatomic) UIImage *lastedImageSnapShot; // @synthesize lastedImageSnapShot=_lastedImageSnapShot;
@property(nonatomic) _Bool useDissloveImageUpdate; // @synthesize useDissloveImageUpdate=_useDissloveImageUpdate;
@property(nonatomic) _Bool ignoreEmptyDefaultImage; // @synthesize ignoreEmptyDefaultImage=_ignoreEmptyDefaultImage;
@property(nonatomic) _Bool alwaysTemplateRenderingMode; // @synthesize alwaysTemplateRenderingMode=_alwaysTemplateRenderingMode;
@property(nonatomic) _Bool shouldShowWxamMark; // @synthesize shouldShowWxamMark=_shouldShowWxamMark;
@property(nonatomic) _Bool autoScale; // @synthesize autoScale=_autoScale;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool isImageStatic; // @synthesize isImageStatic=_isImageStatic;
@property(nonatomic) _Bool asyncWaitSubThreadLoadDataIfNotInCacheYet; // @synthesize asyncWaitSubThreadLoadDataIfNotInCacheYet=_asyncWaitSubThreadLoadDataIfNotInCacheYet;
@property(nonatomic) _Bool loadCachedImageFileOnMainThread; // @synthesize loadCachedImageFileOnMainThread=_loadCachedImageFileOnMainThread;
@property(copy, nonatomic) CDUnknownBlockType imageTaskEventObserversGenerator; // @synthesize imageTaskEventObserversGenerator=_imageTaskEventObserversGenerator;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskGenerator; // @synthesize downloadTaskGenerator=_downloadTaskGenerator;
@property(nonatomic) __weak id <MMWebImageViewDelegate> m_loadingDelegate; // @synthesize m_loadingDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)setImageFromCacheImage:(id)arg1 dataSize:(id)arg2 url:(id)arg3;
- (void)removeGifView;
- (_Bool)setImageFromData:(id)arg1 url:(id)arg2;
- (_Bool)setImageFromData:(id)arg1;
- (void)dealloc;
- (void)setImageWithDefaultImage;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (id)getCurrentUrl;
- (id)getDarkModeUrl;
- (id)getUrl;
- (id)syncGetLatestImage;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)callLoadingDelegateOnLoadImageFail;
- (void)callLoadingDelegateOnLoadImageOk:(id)arg1;
- (void)stopImageLoadingAndResetForCurrentUrl;
- (void)__setImageRequest:(id)arg1;
- (void)setLightImageURL:(id)arg1 lightImgRequestURL:(id)arg2 darkImageURL:(id)arg3 darkImgRequestURL:(id)arg4 reqContext:(id)arg5 forceUpdate:(_Bool)arg6 scene:(long long)arg7;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3 forceUpdate:(_Bool)arg4 scene:(long long)arg5;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)setImageWithUrlStr:(id)arg1;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1 scene:(long long)arg2;
- (void)setImageURL:(id)arg1 requestURL:(id)arg2;
- (void)setImageURL:(id)arg1;
- (void)loadImageWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImageWithRequest:(id)arg1;
- (void)setEmptyImageURL;
- (void)setFrame:(struct CGRect)arg1;
- (void)privateSetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)configureWithUrlStr:(id)arg1;
- (void)configureWithShowIcon:(id)arg1;
- (void)leftAlignAspectFitImage;
- (void)configForNewLifeWithReportParams:(id)arg1;
- (void)updateWithProductImageURL:(id)arg1;
- (void)updateWithGoods:(id)arg1;
- (id)initForProductImage;
- (void)setWXGWidgetlocalImage:(id)arg1;
- (void)setWXGWidgetsrc:(id)arg1;
@property(readonly, copy, nonatomic) MMWebImageViewChainModel *zz_setup;
- (void)swiftCancelLoading;
- (void)swiftLoadImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)swiftLoadImageWithUrl:(id)arg1 scene:(long long)arg2 darkImageURL:(id)arg3 context:(id)arg4 forceUpdate:(_Bool)arg5;
- (void)displayWithImage:(id)arg1 data:(id)arg2;

@end

