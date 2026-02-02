//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray, WCFinderProfileFeedFetcher, WCFinderProfileFeedManager, WCFinderStreamLoadingState, WCFinderStreamProfileHeadData, WCFinderTopicInfo;
@protocol WCFinderProfileTagFeedViewModelDataChange, WCFinderProfileTagFeedViewModelDelegate;

@interface WCFinderProfileTagFeedViewModel : NSObject
{
    id <WCFinderProfileTagFeedViewModelDelegate> _delegate;
    id <WCFinderProfileTagFeedViewModelDataChange> _dataDelegate;
    WCFinderTopicInfo *_topicInfo;
    WCFinderFeedArray *_feedArray;
    WCFinderProfileFeedFetcher *_dataFetcher;
    WCFinderProfileFeedManager *_feedManager;
    WCFinderStreamProfileHeadData *_headData;
    long long _feedCount;
    WCFinderProfileTagFeedViewModel *_refPageModel;
}

+ (id)createDataFetcher:(id)arg1 topicId:(unsigned long long)arg2 username:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderProfileTagFeedViewModel *refPageModel; // @synthesize refPageModel=_refPageModel;
@property(nonatomic) long long feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) __weak WCFinderStreamProfileHeadData *headData; // @synthesize headData=_headData;
@property(retain, nonatomic) WCFinderProfileFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) WCFinderProfileFeedFetcher *dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(nonatomic) __weak id <WCFinderProfileTagFeedViewModelDataChange> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <WCFinderProfileTagFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderStickTopChanged:(id)arg1;
- (void)onFinderContactAudienceMuteSwitchChange:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (_Bool)hasFetchFirstPage;
- (id)createContentVMFromDataItems:(id)arg1;
- (void)onFeedArrayChanged;
- (void)_continueFetchNextPageUntilFindTid:(id)arg1 retryCnt:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)fetchJustWatchFeed:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_afterRequestPrePage:(_Bool)arg1;
- (_Bool)requestPrePage;
- (_Bool)requestNextPage;
- (void)requestFirstPage:(CDUnknownBlockType)arg1;
- (void)loadLocalCacheDataForNoTopic;
- (id)createFeedListViewModel;
- (unsigned long long)refreshTime;
@property(readonly, nonatomic) WCFinderStreamLoadingState *pullingState;
@property(readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
- (id)init;
- (id)initWithHeadData:(id)arg1 topicInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

