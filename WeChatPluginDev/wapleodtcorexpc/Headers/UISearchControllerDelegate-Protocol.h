//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UISearchController;

@protocol UISearchControllerDelegate <NSObject>

@optional
- (void)searchController:(UISearchController *)arg1 didChangeFromSearchBarPlacement:(long long)arg2;
- (void)searchController:(UISearchController *)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)presentSearchController:(UISearchController *)arg1;
- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;
@end

