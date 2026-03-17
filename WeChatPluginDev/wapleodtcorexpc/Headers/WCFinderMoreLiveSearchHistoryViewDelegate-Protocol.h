//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchSuggestion;

@protocol WCFinderMoreLiveSearchHistoryViewDelegate <NSObject>

@optional
- (void)onHistoryViewDeleteSearchRecord:(WCFinderSearchSuggestion *)arg1;
- (void)onHistoryViewClearAllSerchHistory;
- (void)onHistoryViewSelectSearchRecord:(WCFinderSearchSuggestion *)arg1;
@end

