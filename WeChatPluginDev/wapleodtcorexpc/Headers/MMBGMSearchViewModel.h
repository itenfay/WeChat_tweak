//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBGMPanelPublishContext, MMBGMSelectedConfig, MMBGMUniqueMutableArray, NSData, NSString;
@protocol MMBGMSearchViewModelDelegate;

@interface MMBGMSearchViewModel : NSObject
{
    _Bool _hasMore;
    unsigned int _currentPageOffset;
    MMBGMSelectedConfig *_config;
    id <MMBGMSearchViewModelDelegate> _delegate;
    NSString *_currentSearchKey;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMUniqueMutableArray *_searchResults;
    unsigned long long _currentSearchId;
    NSData *_sessionBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned int currentPageOffset; // @synthesize currentPageOffset=_currentPageOffset;
@property(nonatomic) unsigned long long currentSearchId; // @synthesize currentSearchId=_currentSearchId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) MMBGMUniqueMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(copy, nonatomic) NSString *currentSearchKey; // @synthesize currentSearchKey=_currentSearchKey;
@property(nonatomic) __weak id <MMBGMSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (_Bool)hasMoreData;
- (void)_doStoryBGMSearchCGIWithKey:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)reset;
- (void)loadMoreData;
- (_Bool)searchMusicWithKey:(id)arg1;
- (id)init;

@end

