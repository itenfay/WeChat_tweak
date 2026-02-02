//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UISearchBar;

@protocol MMFinderLiveGameSearchDelegate <NSObject>
- (void)onSearchVMModelUpdateFinished;
- (void)onGetMostRecentlyPlayGames:(NSArray *)arg1;
- (void)onGetGameContinueSearchResult:(NSArray *)arg1 hasNext:(_Bool)arg2;
- (void)onGetGameSearchResultArray:(NSArray *)arg1 hasNext:(_Bool)arg2;
- (void)gameSearchBarWillSearch:(UISearchBar *)arg1 searchText:(NSString *)arg2;
- (void)gameSearchBarClear:(UISearchBar *)arg1;
- (void)gameSearchBarCancel:(UISearchBar *)arg1;
- (void)gameSearchBarTextDidBeginEditing:(UISearchBar *)arg1;
@end

