//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_addImageToFavorites
{
    NSString *_cacheKey;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (id)genKeyForUrl:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)getImageDataWithLocalId:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (void)addToFavoritesWithImageData:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)init;

@end

