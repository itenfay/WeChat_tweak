//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray, WCFinderStreamLoadingState;

@interface WCFinderMemberShipDiscussionPage : NSObject
{
    int _cgiType;
    NSString *_title;
    NSString *_identifier;
    WCFinderFeedArray *_feedArray;
    WCFinderStreamLoadingState *_state;
    unsigned long long _pageType;
    NSString *_highLightQAFeedId;
    NSString *_finderUsername;
    CDUnknownBlockType _feedMapper;
    CDUnknownBlockType _postingFeedFetcher;
    CDUnknownBlockType _cacheFeedFetcher;
    NSString *_redirectFeedID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(copy, nonatomic) CDUnknownBlockType cacheFeedFetcher; // @synthesize cacheFeedFetcher=_cacheFeedFetcher;
@property(copy, nonatomic) CDUnknownBlockType postingFeedFetcher; // @synthesize postingFeedFetcher=_postingFeedFetcher;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(nonatomic) int cgiType; // @synthesize cgiType=_cgiType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *highLightQAFeedId; // @synthesize highLightQAFeedId=_highLightQAFeedId;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)mergePostingFeedTo:(id)arg1 firstPage:(_Bool)arg2;
- (void)requestSearchPageData:(unsigned long long)arg1;
- (void)requestNextPageData;
- (id)updateSnapshot;
- (void)requestFirstPageData;
- (void)requestCacheData;
- (id)init;

@end

