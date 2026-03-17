//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UISearchController;
@protocol UISearchSuggestion;

@protocol UISearchResultsUpdating <NSObject>
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1;

@optional
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1 selectingSearchSuggestion:(id <UISearchSuggestion>)arg2;
@end

