//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UISearchBar;

@protocol MMFinderLiveMusicSettingSearchDelegate <NSObject>
- (void)onGetMusicDataContinueSearchResult:(int)arg1 resultArray:(NSArray *)arg2 continueFlag:(unsigned int)arg3;
- (void)onGetMusicDataSearchResult:(int)arg1 resultArray:(NSArray *)arg2 continueFlag:(unsigned int)arg3;
- (void)musicDataSearchBarWillSearch:(UISearchBar *)arg1 searchText:(NSString *)arg2;
- (void)musicDataSearchBarEndSearch:(UISearchBar *)arg1;
- (void)musicDataSearchBarTextDidBeginEditing:(UISearchBar *)arg1;
@end

