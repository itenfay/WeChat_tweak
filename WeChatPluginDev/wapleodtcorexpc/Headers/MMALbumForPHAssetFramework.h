//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAlbumFetchResult, NSArray, NSDictionary, NSMutableDictionary, PHAssetCollection;

@interface MMALbumForPHAssetFramework
{
    _Bool _m_shouldIncludeVideo;
    _Bool _m_isOnlyShowVideo;
    _Bool _isOnlyShowAssetWithLocation;
    PHAssetCollection *m_collection;
    MMAlbumFetchResult *m_fetchResult;
    NSMutableDictionary *m_assetDic;
    NSArray *_m_imagesArray;
    NSDictionary *_m_indexInAllToIndexInImages;
    long long _m_livePhotoMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_livePhotoMode; // @synthesize m_livePhotoMode=_m_livePhotoMode;
@property(nonatomic) _Bool isOnlyShowAssetWithLocation; // @synthesize isOnlyShowAssetWithLocation=_isOnlyShowAssetWithLocation;
@property(nonatomic) _Bool m_isOnlyShowVideo; // @synthesize m_isOnlyShowVideo=_m_isOnlyShowVideo;
@property(nonatomic) _Bool m_shouldIncludeVideo; // @synthesize m_shouldIncludeVideo=_m_shouldIncludeVideo;
@property(retain, nonatomic) NSDictionary *m_indexInAllToIndexInImages; // @synthesize m_indexInAllToIndexInImages=_m_indexInAllToIndexInImages;
@property(retain, nonatomic) NSArray *m_imagesArray; // @synthesize m_imagesArray=_m_imagesArray;
@property(retain, nonatomic) NSMutableDictionary *m_assetDic; // @synthesize m_assetDic;
@property(retain, nonatomic) MMAlbumFetchResult *m_fetchResult; // @synthesize m_fetchResult;
@property(retain, nonatomic) PHAssetCollection *m_collection; // @synthesize m_collection;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)stopICloudActivity;
- (id)assetForPHAssset:(id)arg1;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)name;
- (id)albumId;
- (void)updateFetchResult:(id)arg1;
- (id)getFetchResult;
- (id)initWithPHAssetCollection:(id)arg1 options:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

