//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesCDNInfo, FavoritesItem, FavoritesItemDataField, NSMutableArray;

@protocol FavoritesUploadProccessorDelegate <NSObject>
- (_Bool)needDownloadMsgOfData:(FavoritesItemDataField *)arg1 inItem:(FavoritesItem *)arg2;
- (void)updateFavoritesItemCDNInfo:(NSMutableArray *)arg1 inItem:(FavoritesItem *)arg2;
- (_Bool)needUploadData:(FavoritesItemDataField *)arg1 ofType:(int)arg2 inItem:(FavoritesItem *)arg3;
- (_Bool)deleteCdnInfo:(FavoritesCDNInfo *)arg1;
- (_Bool)updateCdnInfo:(FavoritesCDNInfo *)arg1;
- (void)reUploadFavItem:(FavoritesItem *)arg1;
- (void)updateCdnInfoInItem:(FavoritesItem *)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (FavoritesCDNInfo *)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)saveCdnInfoInData:(FavoritesItemDataField *)arg1 forItem:(FavoritesItem *)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)onProccessItem:(FavoritesItem *)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
@end

