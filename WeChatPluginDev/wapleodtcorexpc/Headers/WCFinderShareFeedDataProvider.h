//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderRelatedRecommendTips, NSArray, NSData, NSMutableArray, NSString, WCFinderFeedArray, WCFinderGetRelatedListParams, WCFinderPushFeedViewProductParams, WCFinderTaskQueue;
@protocol WCFinderShareFeedDataProviderDelegate;

@interface WCFinderShareFeedDataProvider : NSObject
{
    _Bool _onlyOneFeed;
    _Bool _allowTopPull;
    _Bool _hasRequestPlaceholderDataItems;
    _Bool _appendingPlaceholderDataItems;
    id <WCFinderShareFeedDataProviderDelegate> _delegate;
    NSData *_lastBuff;
    NSString *_enterTid;
    WCFinderFeedArray *_feedArray;
    NSMutableArray *_jumpFeedArray;
    NSData *_debugMessage;
    FinderRelatedRecommendTips *_relatedRecommendTips;
    CDUnknownBlockType _feedMapper;
    WCFinderTaskQueue *_taskQueue;
    WCFinderGetRelatedListParams *_params;
    WCFinderPushFeedViewProductParams *_productInfo;
    NSMutableArray *_placeholderDataItems;
    NSMutableArray *_placeholderAppendList;
    NSArray *_needCollectionDataItemList;
    struct WCFinderShareDataState _flag;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool appendingPlaceholderDataItems; // @synthesize appendingPlaceholderDataItems=_appendingPlaceholderDataItems;
@property(nonatomic) _Bool hasRequestPlaceholderDataItems; // @synthesize hasRequestPlaceholderDataItems=_hasRequestPlaceholderDataItems;
@property(copy, nonatomic) NSArray *needCollectionDataItemList; // @synthesize needCollectionDataItemList=_needCollectionDataItemList;
@property(retain, nonatomic) NSMutableArray *placeholderAppendList; // @synthesize placeholderAppendList=_placeholderAppendList;
@property(retain, nonatomic) NSMutableArray *placeholderDataItems; // @synthesize placeholderDataItems=_placeholderDataItems;
@property(nonatomic) struct WCFinderShareDataState flag; // @synthesize flag=_flag;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCFinderGetRelatedListParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @synthesize relatedRecommendTips=_relatedRecommendTips;
@property(copy, nonatomic) NSData *debugMessage; // @synthesize debugMessage=_debugMessage;
@property(retain, nonatomic) NSMutableArray *jumpFeedArray; // @synthesize jumpFeedArray=_jumpFeedArray;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSString *enterTid; // @synthesize enterTid=_enterTid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) _Bool allowTopPull; // @synthesize allowTopPull=_allowTopPull;
@property(nonatomic) _Bool onlyOneFeed; // @synthesize onlyOneFeed=_onlyOneFeed;
@property(nonatomic) __weak id <WCFinderShareFeedDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forkProviderWithFeed:(id)arg1 byPassInfo:(id)arg2 commentScene:(int)arg3;
- (void)updateLocalDataItem:(CDUnknownBlockType)arg1;
- (void)deadlyErrorCleanDatas:(_Bool)arg1;
- (id)parseError:(int)arg1 msg:(id)arg2;
- (void)_onCGIBackError:(int)arg1 msg:(id)arg2;
- (void)insertFeeds:(id)arg1 fromIndex:(unsigned long long)arg2 cleanBottom:(_Bool)arg3;
- (void)deleteFeedWithIds:(id)arg1;
- (_Bool)recommendTipsIsValid;
- (void)appendDataItem:(id)arg1 isFirstPage:(_Bool)arg2 isBottom:(_Bool)arg3 resp:(id)arg4;
- (id)createPreRelativeTask;
- (id)createNextRelativeTask;
- (void)_onDetailCGIBack:(id)arg1 isFirstDataItemLoading:(_Bool)arg2;
- (id)createEncryptCommentDetailTask:(_Bool)arg1;
- (id)createCommentDetailTask:(_Bool)arg1;
- (id)createDetailTask:(_Bool)arg1;
- (id)firstDataItem;
- (void)collectionUnUsedPlaceholderObjects;
- (void)appendPlaceholderObject;
- (id)sliceDataArray:(id)arg1;
- (void)requestPlaceholderData;
- (void)requestPrePage;
- (void)requestNextPage;
- (struct WCFinderShareDataState *)stateRef;
- (struct WCFinderShareDataState)state;
- (void)requestFirstPage;
- (void)requestCacheData;
- (id)initWithParams:(id)arg1 feedMapper:(CDUnknownBlockType)arg2;

@end

