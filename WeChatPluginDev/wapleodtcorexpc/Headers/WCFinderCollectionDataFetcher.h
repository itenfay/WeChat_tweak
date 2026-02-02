//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCollectionInfo, FinderJumpInfo, NSArray, NSData, NSMutableSet, NSString, WCFinderFeedArray;

@interface WCFinderCollectionDataFetcher : NSObject
{
    _Bool _isLoading;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    _Bool _hasFetchData;
    _Bool _isPullingTop;
    _Bool _isPullingBottom;
    _Bool _isPullingFirstPage;
    NSArray *_previousContentVMs;
    FinderCollectionInfo *_collectionInfo;
    NSString *_fromTid;
    NSString *_finderUsername;
    NSMutableSet *_tidContainSet;
    WCFinderFeedArray *_feedArray;
    NSData *_lastBuffer;
    FinderJumpInfo *_creatorEntranceJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *creatorEntranceJumpInfo; // @synthesize creatorEntranceJumpInfo=_creatorEntranceJumpInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isPullingFirstPage; // @synthesize isPullingFirstPage=_isPullingFirstPage;
@property(nonatomic) _Bool isPullingBottom; // @synthesize isPullingBottom=_isPullingBottom;
@property(nonatomic) _Bool isPullingTop; // @synthesize isPullingTop=_isPullingTop;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *fromTid; // @synthesize fromTid=_fromTid;
@property(retain, nonatomic) FinderCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSArray *previousContentVMs; // @synthesize previousContentVMs=_previousContentVMs;
- (unsigned long long)collectionTopicID;
- (void)pullFirstPage;
- (void)pullBottom;
- (void)pullTop;
- (_Bool)hasMoreBottom;
- (_Bool)hasMoreTop;
@property(readonly, nonatomic) int commentScene;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (long long)contentIndexOfSortID:(unsigned long long)arg1;
- (void)fetchNextPageData:(int)arg1;
- (void)fetchFirstPageData;
- (void)updateCollecetionInfoIfNeeded:(id)arg1;
- (void)appendDataItems:(id)arg1 direction:(int)arg2 changeSource:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *contentVMs;
- (id)initWithCollectionInfo:(id)arg1 fromTid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

