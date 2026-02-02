//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi, WCFinderTopicInfo;
@protocol WCFinderGlobalFavFeedTopicListDelegate, WCFinderGlobalFavFlowPageViewModelDelegate;

@interface WCFinderGlobalFavFlowPageViewModel : NSObject
{
    _Bool _continueFlag;
    WCFinderTopicInfo *_topicInfo;
    id <WCFinderGlobalFavFlowPageViewModelDelegate> _delegate;
    id <WCFinderGlobalFavFeedTopicListDelegate> _topicListDelegate;
    NSMutableArray *_contentVMArray;
    unsigned long long _refreshTime;
    unsigned long long _finderTotalCount;
    unsigned long long _megavideoTotalCount;
    unsigned long long _totalCount;
    unsigned long long _state;
    long long _noMoreStyle;
    NSData *_lastBuf;
    WCFinderBaseCgi *_cgi;
}

+ (id)pageViewModelWithTopicInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) long long noMoreStyle; // @synthesize noMoreStyle=_noMoreStyle;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long megavideoTotalCount; // @synthesize megavideoTotalCount=_megavideoTotalCount;
@property(nonatomic) unsigned long long finderTotalCount; // @synthesize finderTotalCount=_finderTotalCount;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) __weak id <WCFinderGlobalFavFeedTopicListDelegate> topicListDelegate; // @synthesize topicListDelegate=_topicListDelegate;
@property(nonatomic) __weak id <WCFinderGlobalFavFlowPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
- (void)onFinderMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isFav:(_Bool)arg3;
- (void)onFinderMegaVideoDelete:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (_Bool)shouldInsertFeedToList:(id)arg1;
- (id)generateSearchlistViewModel;
- (void)getLocalFirstPageData;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (void)fetchServerDataWithLastBuffer:(id)arg1;
- (_Bool)hasMoreData;
- (long long)indexRowForContentVM:(id)arg1;
- (id)contentVMFromTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)dealloc;
- (id)initWithTopicInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

