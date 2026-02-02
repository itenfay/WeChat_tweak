//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSMutableSet, NSString;

@interface WCFinderTLRegardfulAuthorSingleListViewModel
{
    _Bool _noMoreData;
    NSString *_finderUsername;
    NSMutableSet *_tidSet;
    NSMutableArray *_allDataItems;
    unsigned long long _preFetchNextPageIndex;
    NSData *_lastBuf;
    NSString *_feedID;
    NSString *_nonceID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)contentVMWithDataItem:(id)arg1;
- (id)contentVmWithVM:(id)arg1;
- (void)updateUploadingDataItem:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)appendContentVM:(id)arg1;
- (void)appendDataItem:(id)arg1;
- (void)fetchDataWithIsFirstPage:(_Bool)arg1;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (_Bool)needFetchFirstPageData;
- (id)contentVMOfTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)allDataCount;
- (_Bool)hasFetchFirstPageData;
- (_Bool)hasMoreData;
- (id)noMoreDataTips;
- (id)noDataTips;
- (id)initWithUsername:(id)arg1 lastTid:(id)arg2 nonceID:(id)arg3;

@end

