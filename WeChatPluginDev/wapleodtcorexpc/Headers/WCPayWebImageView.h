//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, UIImage;
@protocol WCPayWebImageViewDelegate;

@interface WCPayWebImageView
{
    _Bool _loadImageOnMainThread;
    _Bool _isNeedResize;
    _Bool _bShouldRestrictCheckMd5;
    _Bool _bForceUpdateImage;
    double _imageScale;
    id <WCPayWebImageViewDelegate> _delegate;
    long long _resizeMode;
    long long _expandHitWidth;
    long long _expandHitHeight;
    NSURL *_imageDownloadUrl;
    NSURL *_lightModeUrl;
    NSURL *_darkModeUrl;
    NSString *_cacheFolder;
    UIImage *_defaultWebImage;
    NSString *_nsMd5;
    NSString *_nsDarkmodeMd5;
    struct UIEdgeInsets _resizeableInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsDarkmodeMd5; // @synthesize nsDarkmodeMd5=_nsDarkmodeMd5;
@property(retain, nonatomic) NSString *nsMd5; // @synthesize nsMd5=_nsMd5;
@property(retain, nonatomic) UIImage *defaultWebImage; // @synthesize defaultWebImage=_defaultWebImage;
@property(nonatomic) _Bool bForceUpdateImage; // @synthesize bForceUpdateImage=_bForceUpdateImage;
@property(retain, nonatomic) NSString *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
@property(retain, nonatomic) NSURL *darkModeUrl; // @synthesize darkModeUrl=_darkModeUrl;
@property(retain, nonatomic) NSURL *lightModeUrl; // @synthesize lightModeUrl=_lightModeUrl;
@property(retain, nonatomic) NSURL *imageDownloadUrl; // @synthesize imageDownloadUrl=_imageDownloadUrl;
@property(nonatomic) _Bool bShouldRestrictCheckMd5; // @synthesize bShouldRestrictCheckMd5=_bShouldRestrictCheckMd5;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) struct UIEdgeInsets resizeableInsets; // @synthesize resizeableInsets=_resizeableInsets;
@property(nonatomic) __weak id <WCPayWebImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNeedResize; // @synthesize isNeedResize=_isNeedResize;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool loadImageOnMainThread; // @synthesize loadImageOnMainThread=_loadImageOnMainThread;
- (id)scaleImageToFitMemoryIfNecessary:(id)arg1 imageData:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)getImageDataMd5:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)md5ForString:(id)arg1;
- (void)startLoadImageData;
- (id)getDefaultImage;
- (id)getDarkModeUrlString;
- (id)getLightModeUrlString;
- (id)getImageUrlString;
- (void)setDefaultImage:(id)arg1;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2 forceUpdate:(_Bool)arg3 imageLoadDelegate:(id)arg4;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2 imageLoadDelegate:(id)arg3;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2;
- (void)setImageURL:(id)arg1;
- (id)initWithMd5:(id)arg1 darkModeMd5:(id)arg2;
- (id)initWithMd5:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 cacheFolder:(id)arg2 md5:(id)arg3 darkModeMd5:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 cacheFolder:(id)arg2 md5:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 md5:(id)arg2 darkModeMd5:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 md5:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 cacheFolder:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

