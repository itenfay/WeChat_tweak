//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderMegalikeViewModel;
@protocol WCFinderLikeListFlowViewModelDelegate;

@interface WCFinderLikeListFlowViewModel : NSObject
{
    _Bool _isFetchingData;
    _Bool _continueFlag;
    id <WCFinderLikeListFlowViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    unsigned long long _finderTotalCount;
    unsigned long long _megavideoTotalCount;
    NSMutableArray *_contentVMArray;
    WCFinderMegalikeViewModel *_megaVideoViewModel;
    unsigned long long _state;
    NSData *_lastBuf;
    unsigned long long _totalCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) WCFinderMegalikeViewModel *megaVideoViewModel; // @synthesize megaVideoViewModel=_megaVideoViewModel;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) unsigned long long megavideoTotalCount; // @synthesize megavideoTotalCount=_megavideoTotalCount;
@property(nonatomic) unsigned long long finderTotalCount; // @synthesize finderTotalCount=_finderTotalCount;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderLikeListFlowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderMegaVideoDelete:(id)arg1;
- (void)onFinderMegaVideoLikeStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isLike:(_Bool)arg3;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (id)generateLikeListViewModel;
- (void)getLocalFirstPageData;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (void)fetchServerDataWithLastBuffer:(id)arg1;
- (_Bool)hasMoreData;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (unsigned long long)likeTotalCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

