//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCEliminatedSlotMMKV;
@protocol RingToneSearchViewModelDelegate;

@interface RingToneSearchHistoryViewModel : NSObject
{
    id <RingToneSearchViewModelDelegate> _searchDelegate;
    NSMutableArray *_allSearchHistory;
    WCEliminatedSlotMMKV *_slotKv;
    NSString *_searchKeyWord;
    NSMutableArray *_searchTextArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *searchTextArray; // @synthesize searchTextArray=_searchTextArray;
@property(copy, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotKv; // @synthesize slotKv=_slotKv;
@property(retain, nonatomic) NSMutableArray *allSearchHistory; // @synthesize allSearchHistory=_allSearchHistory;
@property(nonatomic) __weak id <RingToneSearchViewModelDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void)clearAllCurrentData;
- (void)throttleFetchProcess;
- (void)preFetchProcess:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)fetchSuggestion:(id)arg1;
- (id)searchSuggestionAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)loadLatestHistoryData;
- (void)initHistorySearchMMKV;
- (void)addSearchContent:(id)arg1;
- (void)deleteSearchRecord:(id)arg1;
- (void)deleteAllSearchRecord;
- (void)updateLocalRingToneSearchHistory:(id)arg1;
- (id)getLocalRingToneSearchHistory;
- (id)getHistoryMMKV;
- (void)dealloc;
- (id)init;

@end

