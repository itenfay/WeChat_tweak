//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCVideoProducerMusicSearchRequest;

@interface WCVideoProducerMusicSearchingOperation
{
    NSMutableArray *_searchRequestList;
    WCVideoProducerMusicSearchRequest *_currentSearchRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCVideoProducerMusicSearchRequest *currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property(retain, nonatomic) NSMutableArray *searchRequestList; // @synthesize searchRequestList=_searchRequestList;
- (void)didStopPlayingSelectedSearchResultMusic;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didSelectSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didShowSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didRequestToSearchNewKey:(id)arg1;
- (void)operationDidStop;
- (void)operationDidStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

