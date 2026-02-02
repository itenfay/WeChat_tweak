//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderCachedLocation, WCFinderHomeLifeFilter;
@protocol WCFinderLifeHomePageViewModelDelegate;

@interface WCFinderLifeHomePageViewModel : NSObject
{
    _Bool _continueFlag;
    int _commentScene;
    id <WCFinderLifeHomePageViewModelDelegate> _delegate;
    WCFinderHomeLifeFilter *_filter;
    unsigned long long _refreshTime;
    NSString *_reportTagInfo;
    NSData *_lastBuff;
    NSMutableArray *_sections;
    NSMutableSet *_tidSet;
    unsigned long long _loadingState;
    WCFinderCachedLocation *_cachedLocation;
    unsigned long long _prefetchRemainCount;
}

+ (void)requestFirstPageCommentScene:(int)arg1 location:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long prefetchRemainCount; // @synthesize prefetchRemainCount=_prefetchRemainCount;
@property(retain, nonatomic) WCFinderCachedLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *reportTagInfo; // @synthesize reportTagInfo=_reportTagInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) WCFinderHomeLifeFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak id <WCFinderLifeHomePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onPostDataItemSuccess:(id)arg1;
- (void)onPostDataItemFailed:(id)arg1;
- (void)onPostDataItem:(id)arg1;
- (id)formatSubTags:(id)arg1;
- (vector_c9a4c9eb)groupDataItem:(id)arg1 byLayout:(id)arg2;
- (void)appendDataItems:(id)arg1 layout:(id)arg2;
- (void)fetchAsyncInfo:(id)arg1 location:(id)arg2;
- (_Bool)deleteContentVM:(id)arg1;
- (void)requestDataWithActionFlag:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDataWithPullType:(unsigned long long)arg1 firstScreen:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestNextPage;
- (void)loadingFromTop;
- (void)requestFirstPage;
- (void)reset;
- (id)dividerForSection:(long long)arg1;
- (id)indexPathWidthTid:(id)arg1;
- (id)contentVMAtSection:(long long)arg1 index:(long long)arg2;
- (long long)feedItemCountForSection:(long long)arg1;
- (long long)feedSectionCount;
- (id)initWithCommentScene:(int)arg1 location:(id)arg2 filter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

