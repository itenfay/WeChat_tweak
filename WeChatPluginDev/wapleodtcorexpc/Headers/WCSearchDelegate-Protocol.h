//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WCSearcher;

@protocol WCSearchDelegate <NSObject>

@optional
- (void)wcsAccessibilityPerformEscape:(WCSearcher *)arg1;
- (UIView *)onSearchPanGestureReturnBottomView;
- (void)onSearchPanGestureMoveRight;
- (void)onSearchPanGestureBeginDrag;
- (void)wcsUpdateSearchResultsForSearch:(WCSearcher *)arg1;
- (void)wcsSearchBar:(WCSearcher *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)wcsSearchBarResultsListButtonClicked:(WCSearcher *)arg1;
- (void)wcsSearchBarCancelButtonClicked:(WCSearcher *)arg1;
- (void)wcsSearchBarBookmarkButtonClicked:(WCSearcher *)arg1;
- (void)wcsSearchBarSearchButtonClicked:(WCSearcher *)arg1;
- (_Bool)wcsSearchBar:(WCSearcher *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)wcsSearchBar:(WCSearcher *)arg1 textDidChange:(NSString *)arg2;
- (void)wcsSearchBarTextDidEndEditing:(WCSearcher *)arg1;
- (_Bool)wcsSearchBarShouldEndEditing:(WCSearcher *)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(WCSearcher *)arg1;
- (_Bool)wcsSearchBarShouldBeginEditing:(WCSearcher *)arg1;
- (void)wcsUpdateSearchContainer:(WCSearcher *)arg1;
- (void)wcsPresentSearchController:(WCSearcher *)arg1;
- (void)wcsDidDismissSearch:(WCSearcher *)arg1;
- (void)wcsWillDismissSearch:(WCSearcher *)arg1;
- (void)wcsDidPresentSearch:(WCSearcher *)arg1;
- (void)wcsWillPresentSearch:(WCSearcher *)arg1;
@end

