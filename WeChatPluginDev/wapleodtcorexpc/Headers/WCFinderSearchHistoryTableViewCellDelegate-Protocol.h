//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchSuggestion;

@protocol WCFinderSearchHistoryTableViewCellDelegate <NSObject>

@optional
- (void)onRemoveSearchHistory:(WCFinderSearchSuggestion *)arg1;
@end

