//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem;

@protocol IFavoritesRepairSvrDataExt <NSObject>

@optional
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (void)onRepairUpdateFavItem:(FavoritesItem *)arg1;
@end

