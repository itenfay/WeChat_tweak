//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavRelatedTagView, NSString;

@protocol FavRelatedTagDelegate <NSObject>

@optional
- (void)deselectTag:(NSString *)arg1 fromFilter:(FavRelatedTagView *)arg2;
- (void)selectTag:(NSString *)arg1 fromFilter:(FavRelatedTagView *)arg2;
@end

