//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, WCFinderBaseCgi, WCFinderFeedSearchParams;
@protocol WCFinderFeedSearchViewModelDelegate;

@interface WCFinderFeedSearchViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderFeedSearchViewModelDelegate> _delegate;
    NSMutableArray *_topicTitleList;
    NSMutableArray *_searchItemModelList;
    unsigned long long _state;
    unsigned long long _refreshTime;
    NSData *_lastBuf;
    WCFinderBaseCgi *_cgi;
    WCFinderFeedSearchParams *_searchParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(retain, nonatomic) WCFinderBaseCgi *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *searchItemModelList; // @synthesize searchItemModelList=_searchItemModelList;
@property(retain, nonatomic) NSMutableArray *topicTitleList; // @synthesize topicTitleList=_topicTitleList;
@property(nonatomic) __weak id <WCFinderFeedSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportClickEventWithItemIndex:(unsigned long long)arg1;
- (void)reportExposeEventWithItemIndex:(unsigned long long)arg1;
- (void)reportSearchEventWithItemCount:(unsigned long long)arg1;
- (void)resetStateAndLastBuf;
- (void)resetSearchCgi;
- (void)clearFeedSearchData;
- (id)searchItemModelAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchItemModelCount;
- (_Bool)hasMoreSearchData;
- (void)fetchFavServerDataWithLastBuffer:(id)arg1;
- (void)fetchSvrFeedSearchNextPageData;
- (void)fetchSvrFeedSearchFirstPageData:(id)arg1;
- (void)loadLocalFeedSearchData;
- (void)handleFavTopicData:(id)arg1;
- (void)fetchSvrFavTopicData;
- (void)loadLocalFavTopicData;
- (id)init;

@end

