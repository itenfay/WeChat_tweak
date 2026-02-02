//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesCDNInfoDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (_Bool)deleteCdnInfo:(id)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (id)getUploadCdnInfoByItemId:(unsigned int)arg1 LocalItemDataId:(id)arg2 andType:(int)arg3;
- (_Bool)updateCdnInfo:(id)arg1;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (_Bool)addCDNInfo:(id)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

