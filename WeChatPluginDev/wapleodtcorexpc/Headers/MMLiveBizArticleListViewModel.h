//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBizUserInfo, MMFinderLiveTaskId, NSMutableArray, NSString, WCFinderLiveTransferCGI;
@protocol MMLiveBizArticleListViewModelDelegate;

@interface MMLiveBizArticleListViewModel : NSObject
{
    WCFinderLiveTransferCGI *_requestingTransferCGI;
    _Bool _isRequestingNextPage;
    _Bool _hasNextPage;
    unsigned int _nextSeq;
    NSString *_lastContext;
    id <MMLiveBizArticleListViewModelDelegate> _delegate;
    MMFinderLiveTaskId *_liveTaskId;
    FinderBizUserInfo *_bizUserInfo;
    long long _requestType;
    NSMutableArray *_articleList;
    NSString *_searchQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) NSMutableArray *articleList; // @synthesize articleList=_articleList;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) FinderBizUserInfo *bizUserInfo; // @synthesize bizUserInfo=_bizUserInfo;
@property(readonly, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <MMLiveBizArticleListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadTestArticlesIfNeeded;
@property(readonly, nonatomic) long long articleLoadStatus;
- (void)_loadStatusDidUpdate;
- (void)_articlesDidUpdate;
- (void)_appendArticles:(id)arg1;
- (void)_handleResponseObject:(id)arg1;
- (Class)_getResponseObjectClass;
- (id)_createRequestObject;
- (unsigned int)_getCGINumber;
- (void)_requestNextPage;
- (void)requestNextPageIfNeeded;
- (void)requestFirstPage;
- (void)_resetRequestContext;
- (id)initWithLiveTaskId:(id)arg1 bizUserInfo:(id)arg2 requestType:(long long)arg3;

@end

