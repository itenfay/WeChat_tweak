//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAlbumDataProvider
{
}

+ (void)internalFetchLastMMAssetWith:(CDUnknownBlockType)arg1 inSecond:(double)arg2;
+ (void)FetchLastMMAssetWith:(CDUnknownBlockType)arg1 inSecond:(double)arg2;
+ (void)FetchMMAlbumWithID:(id)arg1 With:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 options:(id)arg4;
+ (void)FirstMMAlbumWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 options:(id)arg3;
+ (_Bool)isPhotoAccessLimited;
+ (_Bool)isUserAuthorize;
+ (_Bool)isAuthorizeNotDetermined;
+ (_Bool)isAuthorize;
+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 options:(id)arg3 callbackOnMainThread:(_Bool)arg4;
+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 options:(id)arg3;

@end

