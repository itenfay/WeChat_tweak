//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveStreamGetAsyncLoadInfoConfig, NSMutableDictionary;
@protocol MMFinderLiveFeedExtraInfoFetcherDelegate;

@interface MMFinderLiveFeedExtraInfoFetcher : NSObject
{
    int _commentScene;
    FinderLiveStreamGetAsyncLoadInfoConfig *_asyncLoadInfoConfig;
    id <MMFinderLiveFeedExtraInfoFetcherDelegate> _delegate;
    NSMutableDictionary *_refreshExtraInfoTsDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *refreshExtraInfoTsDict; // @synthesize refreshExtraInfoTsDict=_refreshExtraInfoTsDict;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <MMFinderLiveFeedExtraInfoFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @synthesize asyncLoadInfoConfig=_asyncLoadInfoConfig;
- (void)updateAsyncLoadConfigIntervals:(id)arg1 requestScenes:(id)arg2;
- (_Bool)refreshFeedExtraInfoIfNeeded:(id)arg1 aggregationCardList:(id)arg2 productRefreshItems:(id)arg3 entertainmentRefreshItems:(id)arg4;
- (id)getUidUnitWithItem:(id)arg1;
- (_Bool)enableRefreshEntertainmentCard;
- (_Bool)enableRefreshProductCard;
- (_Bool)enableRefreshAggregationCard;
- (_Bool)enableRefreshHighlightTag;
- (void)reinitRefreshExtraInfoTsDict;
- (void)resetRefreshRecords;
- (id)initWithCommentScene:(int)arg1;

@end

