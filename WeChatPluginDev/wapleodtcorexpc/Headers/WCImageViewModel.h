//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem, WCMediaItem;

@interface WCImageViewModel : NSObject
{
    _Bool _canGridPreview;
    int _style;
    int _photoType;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    long long _imageType;
    long long _precedentImageType;
}

+ (id)adaptiveSmall:(id)arg1 couldCacheBig:(_Bool)arg2;
+ (id)adaptiveSmall:(id)arg1 imageType:(long long)arg2;
+ (id)adaptiveSmallAndGridPreview:(id)arg1;
+ (id)adaptiveSmall:(id)arg1;
+ (id)centerSmall:(id)arg1 couldCacheBig:(_Bool)arg2;
+ (id)centerSmall:(id)arg1 photoType:(int)arg2;
+ (id)centerSmall:(id)arg1 parent:(id)arg2;
+ (id)centerSmallAndGridPreview:(id)arg1;
+ (id)centerSmall:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool canGridPreview; // @synthesize canGridPreview=_canGridPreview;
@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) long long precedentImageType; // @synthesize precedentImageType=_precedentImageType;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)thumImageDownloadDebugInfo;
- (_Bool)shouldUpdateBlur;
- (_Bool)canShowThumb;
- (id)getBigImageFromCache;
- (id)getPrecedentImageFromCache;
- (id)getImageFromCache;
- (void)asyncCacheImageToFIC:(id)arg1 image:(id)arg2;
- (id)getImgWithPreviewImgFICEntity:(id)arg1;
- (id)mediaID;
- (id)getPreviewImgFICEntity;
- (id)defaultImage;
- (_Bool)isValidDownloadType:(long long)arg1;
- (void)startDownloadImage;
- (id)getDisplayName:(id)arg1;
- (_Bool)isNormalGridPreview;
- (id)initWithParent:(id)arg1 mediaItem:(id)arg2;

@end

