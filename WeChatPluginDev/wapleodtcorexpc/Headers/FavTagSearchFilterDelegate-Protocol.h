//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavTagSearchFilter, NSString;

@protocol FavTagSearchFilterDelegate <NSObject>

@optional
- (void)onUpdateTag:(NSString *)arg1 to:(NSString *)arg2 fromFilter:(FavTagSearchFilter *)arg3;
- (void)deselectTag:(NSString *)arg1 fromFilter:(FavTagSearchFilter *)arg2;
- (void)selectTag:(NSString *)arg1 fromFilter:(FavTagSearchFilter *)arg2;
@end

