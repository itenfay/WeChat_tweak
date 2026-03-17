//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavSearchBar, NSString;

@protocol FavSearchBarDelegate <NSObject>
- (void)onBeginEditing;
- (void)onStartSearch:(_Bool)arg1;
- (void)onDeleteType:(NSString *)arg1;
- (void)onDeleteTag:(NSString *)arg1;
- (void)onSearchBarMoved:(FavSearchBar *)arg1;
@end

