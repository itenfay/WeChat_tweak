//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, OrderedDictionary, WCVideoProducerMusicPlayingOperation;

@interface WCVideoProducerMusicSearchRequest : NSObject
{
    NSString *_searchKey;
    NSMutableArray *_searchPlayingOperationList;
    OrderedDictionary *_showedSearchMusicListMap;
    WCVideoProducerMusicPlayingOperation *_currentSearchPlayingOperation;
    double _searchRequestBeginTime;
    double _searchRequestEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) double searchRequestEndTime; // @synthesize searchRequestEndTime=_searchRequestEndTime;
@property(nonatomic) double searchRequestBeginTime; // @synthesize searchRequestBeginTime=_searchRequestBeginTime;
@property(retain, nonatomic) WCVideoProducerMusicPlayingOperation *currentSearchPlayingOperation; // @synthesize currentSearchPlayingOperation=_currentSearchPlayingOperation;
@property(retain, nonatomic) OrderedDictionary *showedSearchMusicListMap; // @synthesize showedSearchMusicListMap=_showedSearchMusicListMap;
@property(retain, nonatomic) NSMutableArray *searchPlayingOperationList; // @synthesize searchPlayingOperationList=_searchPlayingOperationList;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void)_searchResultDidStopPlayingSelectedMusic;
- (void)_searchResultDidStartPlayingSelectedMusic;
- (void)_searchResultDidSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidFinish;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSearchKey:(id)arg1;

@end

