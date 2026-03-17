//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, FavoritesItem, NSString;

@protocol MyFavoritesListViewControllerDelegate <NSObject>

@optional
- (CBaseContact *)getContactToForward;
- (NSString *)canFavoritesItemBeForward:(FavoritesItem *)arg1;
@end

