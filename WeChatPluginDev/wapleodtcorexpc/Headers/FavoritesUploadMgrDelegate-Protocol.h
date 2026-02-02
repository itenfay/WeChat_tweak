//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem;

@protocol FavoritesUploadMgrDelegate <NSObject>
- (void)onUploadFavoritesItemFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2 MgrType:(unsigned long long)arg3;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
@end

