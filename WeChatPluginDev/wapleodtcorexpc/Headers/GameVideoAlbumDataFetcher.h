//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol GameVideoAlbumDataFetcherDelegate;

@interface GameVideoAlbumDataFetcher
{
    _Bool _isReachEnding;
    _Bool _isRequesting;
    unsigned int _totalCount;
    unsigned int _newCount;
    id <GameVideoAlbumDataFetcherDelegate> _delegate;
    unsigned long long _startTag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) unsigned int newCount; // @synthesize newCount=_newCount;
@property(nonatomic) unsigned long long startTag; // @synthesize startTag=_startTag;
@property(nonatomic) _Bool isReachEnding; // @synthesize isReachEnding=_isReachEnding;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) __weak id <GameVideoAlbumDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int pageSize;
- (id)parseTags:(id)arg1;
- (id)parseRecommendTags:(id)arg1;
- (void)fetchMoreVideoList;
- (id)parseAlbumVideoItem:(id)arg1;
- (void)loadRecommendVideoListCache;
- (void)fetchRecommendVideoList;
- (void)resetIndex;

@end

