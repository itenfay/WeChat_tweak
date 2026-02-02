//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesFileRetainCountDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (_Bool)isMd5RetainCountZero:(id)arg1;
- (_Bool)deleteItemByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2;
- (_Bool)updateRetainItemBy:(id)arg1 localId:(unsigned int)arg2 dataFmt:(id)arg3;
- (_Bool)insertToFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (id)getRetainItemByMd5:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)isItemExist:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (void)initDB:(id)arg1;
- (id)init;

@end

