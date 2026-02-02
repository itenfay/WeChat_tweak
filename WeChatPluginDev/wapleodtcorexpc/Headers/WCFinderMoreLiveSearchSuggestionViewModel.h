//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderSearchSuggestionCGI;
@protocol WCFinderMoreLiveSearchSuggestionViewModelDelegate;

@interface WCFinderMoreLiveSearchSuggestionViewModel : NSObject
{
    id <WCFinderMoreLiveSearchSuggestionViewModelDelegate> _delegate;
    NSMutableArray *_allSearchHistory;
    NSString *_searchKeyWord;
    WCFinderSearchSuggestionCGI *_currentCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchSuggestionCGI *currentCgi; // @synthesize currentCgi=_currentCgi;
@property(copy, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(retain, nonatomic) NSMutableArray *allSearchHistory; // @synthesize allSearchHistory=_allSearchHistory;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchSuggestionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAllCurrentData;
- (void)throttleFetchProcess;
- (void)preFetchProcess:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)fetchSuggestion:(id)arg1;
- (id)searchSuggestionAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)loadLatestHistoryData;

@end

