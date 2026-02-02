//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAlbum
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastAssetWithSecond:(double)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)stopICloudActivity;
- (id)assetOfIndex:(unsigned long long)arg1;
- (void)shouldIncludeVideoAsset:(_Bool)arg1;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)name;
- (id)albumId;

@end

