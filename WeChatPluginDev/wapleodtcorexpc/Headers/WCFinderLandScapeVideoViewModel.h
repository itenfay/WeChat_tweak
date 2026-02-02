//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderDataItem, WCFinderFeedContentVM, WCFinderLandScapeVCParams;
@protocol WCFinderLandScapeVideoVMDelegate;

@interface WCFinderLandScapeVideoViewModel : NSObject
{
    _Bool _hasGetFirstPlayableItem;
    _Bool _continueflag;
    _Bool _listLoading;
    _Bool _itemLoading;
    _Bool _isFetchingContinuePlay;
    id <WCFinderLandScapeVideoVMDelegate> _delegate;
    NSString *_tid;
    WCFinderFeedContentVM *_enterContentVM;
    WCFinderFeedContentVM *_currentPlayContentVM;
    WCFinderLandScapeVCParams *_params;
    NSString *_encrtptTid;
    NSString *_nonceId;
    NSMutableArray *_contentVMs;
    NSMutableSet *_tidSet;
    NSData *_lastBuf;
    NSData *_continuePlayLastBuf;
    NSMutableArray *_continuePlayContentVMs;
    WCFinderDataItem *_enterFinderDataItem;
}

+ (int)getCommentScene;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *enterFinderDataItem; // @synthesize enterFinderDataItem=_enterFinderDataItem;
@property(retain, nonatomic) NSMutableArray *continuePlayContentVMs; // @synthesize continuePlayContentVMs=_continuePlayContentVMs;
@property(retain, nonatomic) NSData *continuePlayLastBuf; // @synthesize continuePlayLastBuf=_continuePlayLastBuf;
@property(nonatomic) _Bool isFetchingContinuePlay; // @synthesize isFetchingContinuePlay=_isFetchingContinuePlay;
@property(nonatomic) _Bool itemLoading; // @synthesize itemLoading=_itemLoading;
@property(nonatomic) _Bool listLoading; // @synthesize listLoading=_listLoading;
@property(nonatomic) _Bool continueflag; // @synthesize continueflag=_continueflag;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(retain, nonatomic) NSMutableArray *contentVMs; // @synthesize contentVMs=_contentVMs;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *encrtptTid; // @synthesize encrtptTid=_encrtptTid;
@property(nonatomic) _Bool hasGetFirstPlayableItem; // @synthesize hasGetFirstPlayableItem=_hasGetFirstPlayableItem;
@property(retain, nonatomic) WCFinderLandScapeVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderFeedContentVM *currentPlayContentVM; // @synthesize currentPlayContentVM=_currentPlayContentVM;
@property(retain, nonatomic) WCFinderFeedContentVM *enterContentVM; // @synthesize enterContentVM=_enterContentVM;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <WCFinderLandScapeVideoVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleFetchDataCgiFailErrCode:(int)arg1 baseErrMsg:(id)arg2;
- (id)genLongVideoContextWithAddTopFeeds:(id)arg1;
- (void)refreshAfterSelectContentVM:(id)arg1;
- (void)cleanContinuePlayData;
- (void)removeAllDatas;
- (void)updateCurrentPlayContentVM:(id)arg1;
- (long long)nextContinuePlayableFeedIndexOfTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (long long)indexAtContentVM:(id)arg1;
- (id)nextContinuePlayContentVM:(unsigned long long)arg1;
- (id)contentVmAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)appendDataItem:(id)arg1;
- (id)genContentVMWithDataItem:(id)arg1;
- (_Bool)isLoading;
- (void)preFetchContinuePlayFeed;
- (id)genLocationInfo;
- (void)fetchReleatedDataItemWithLongVideoContext:(id)arg1;
- (void)fetchReleatedDataItem;
- (void)_fetchDataItemAndGetReleatedList:(_Bool)arg1;
- (void)fetchDataItemAndReleatedList;
- (void)fetchDataItem;
- (_Bool)getLocalData;
- (void)_baseInit;
- (id)initWithFinderDataItem:(id)arg1 params:(id)arg2;
- (id)initWithEncryptTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (int)listType;
- (id)openParam;
- (void)fetchContinuePlayFeed;
- (void)updatePlayingContentVM:(id)arg1 isFromContinuePlay:(_Bool)arg2;
- (id)nextContentVM;
- (id)playingContentVM;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

