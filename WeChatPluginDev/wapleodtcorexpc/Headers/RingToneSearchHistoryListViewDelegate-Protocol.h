//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchSuggestion;

@protocol RingToneSearchHistoryListViewDelegate <NSObject>

@optional
- (void)onDeleteSearchRecord:(WCFinderSearchSuggestion *)arg1;
- (void)onClearAllSerchHistory;
- (void)onSelectSearchRecord:(WCFinderSearchSuggestion *)arg1 location:(long long)arg2 dataType:(unsigned long long)arg3;
@end

