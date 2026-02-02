//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo, NSArray, NSData, NSString, WCFinderFeedArray;

@interface WCFinderPaidCollectionFeedListProvider : NSObject
{
    _Bool _isLoading;
    _Bool _isPullingTop;
    _Bool _isPullingBottom;
    _Bool _isPullingFirstPage;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    _Bool _hasFetchData;
    NSString *_finderUsername;
    NSArray *_previousContentVMs;
    WCFinderFeedArray *_feedArray;
    NSData *_lastBuffer;
    NSString *_fromTid;
    FinderPaidCollectionInfo *_paidCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *fromTid; // @synthesize fromTid=_fromTid;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(nonatomic) _Bool isPullingFirstPage; // @synthesize isPullingFirstPage=_isPullingFirstPage;
@property(nonatomic) _Bool isPullingBottom; // @synthesize isPullingBottom=_isPullingBottom;
@property(nonatomic) _Bool isPullingTop; // @synthesize isPullingTop=_isPullingTop;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSArray *previousContentVMs; // @synthesize previousContentVMs=_previousContentVMs;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (unsigned long long)collectionTopicID;
- (void)pullFirstPage;
- (void)pullBottom;
- (void)pullTop;
- (_Bool)hasMoreBottom;
- (_Bool)hasMoreTop;
- (void)appendDataItems:(id)arg1 direction:(int)arg2 modifySource:(unsigned long long)arg3;
- (int)commentScene;
- (void)insertLocalCacheFeedIfNeed;
- (void)fetchNextPageData:(int)arg1;
- (void)fetchFirstPageData;
- (id)initWithPaidCollection:(id)arg1 fromTid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

