//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, NSString;

@protocol MMFavCellComponentDelegate <NSObject>

@optional
- (_Bool)enableTingListMode;
- (void)onClickPurgeSelectBtn:(_Bool)arg1 favItem:(FavoritesItem *)arg2;
- (void)onClickTagButtonWithTagName:(NSString *)arg1;
- (void)onClickDetailBtnWith:(FavoritesItem *)arg1;
@end

