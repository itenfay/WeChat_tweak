//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAlbumDataProviderForPHAssetFramework : NSObject
{
}

+ (id)getChangeInfoForResult:(id)arg1 inOriginalAlbum:(id)arg2;
+ (id)firstAlbumWithOptions:(id)arg1;
+ (id)getAlbumIdentifiers:(id)arg1 options:(id)arg2;
+ (id)getAlbumIdentifier:(id)arg1 options:(id)arg2;
+ (id)getAlbumFromAlbumType:(long long)arg1 ForSubType:(long long)arg2 options:(id)arg3;
+ (void)AllMMAlbumsForPHFrameworkWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 options:(id)arg3 callbackOnMainThread:(_Bool)arg4;

@end

