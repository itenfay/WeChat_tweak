//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableArray, NSString;
@protocol MMFinderLiveGameSearchDelegate;

@interface MMFinderLiveGameSearchViewModel : NSObject
{
    _Bool _beginSearching;
    _Bool _hasNext;
    id <MMFinderLiveGameSearchDelegate> _searchDelegate;
    NSString *_nextOffset;
    MMFinderLiveTaskId *_taskId;
    NSString *_currentSearchText;
    NSMutableArray *_mostRecentlyPlayGames;
    NSMutableArray *_searchGames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *searchGames; // @synthesize searchGames=_searchGames;
@property(copy, nonatomic) NSMutableArray *mostRecentlyPlayGames; // @synthesize mostRecentlyPlayGames=_mostRecentlyPlayGames;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(nonatomic) _Bool beginSearching; // @synthesize beginSearching=_beginSearching;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *nextOffset; // @synthesize nextOffset=_nextOffset;
@property(nonatomic) __weak id <MMFinderLiveGameSearchDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (id)getSearchResult;
- (_Bool)hasSearchResult;
- (void)resetSearchResults:(id)arg1;
- (_Bool)continueSearch;
- (void)appendSearchResults:(id)arg1;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultArray:(id)arg2 hasNext:(_Bool)arg3 nextOffset:(id)arg4;
- (void)innerSearchWithText:(id)arg1 nextOffset:(id)arg2;
- (void)doSearchWithText:(id)arg1;
- (void)getMostRecentlyPlayGames;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

