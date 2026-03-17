//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIBarPositioningDelegate-Protocol.h"

@class NSString, UISearchBar;

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional
- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (_Bool)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;
- (_Bool)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (_Bool)searchBarShouldBeginEditing:(UISearchBar *)arg1;
@end

