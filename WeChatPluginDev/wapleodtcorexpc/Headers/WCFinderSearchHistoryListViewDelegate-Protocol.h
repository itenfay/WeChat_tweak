//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchSuggestion;

@protocol WCFinderSearchHistoryListViewDelegate <NSObject>

@optional
- (int)searchHistoryListViewEnterScene;
- (void)onDeleteSearchRecord:(WCFinderSearchSuggestion *)arg1;
- (void)onClearAllSerchHistory;
- (void)onSelectSearchRecord:(WCFinderSearchSuggestion *)arg1;
@end

