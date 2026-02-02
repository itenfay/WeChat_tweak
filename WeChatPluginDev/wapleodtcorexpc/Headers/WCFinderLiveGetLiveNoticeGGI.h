//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePermissionVerifyInfo, NSArray, NSString;

@interface WCFinderLiveGetLiveNoticeGGI
{
    unsigned int _pageOrder;
    NSString *_anchorFinderUsername;
    FinderLivePermissionVerifyInfo *_verifyInfo;
    NSString *_noticeId;
    unsigned long long _lastNoticeCreateTime;
    NSArray *_noticeAggregateTypeArray;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSArray *noticeAggregateTypeArray; // @synthesize noticeAggregateTypeArray=_noticeAggregateTypeArray;
@property(nonatomic) unsigned int pageOrder; // @synthesize pageOrder=_pageOrder;
@property(nonatomic) unsigned long long lastNoticeCreateTime; // @synthesize lastNoticeCreateTime=_lastNoticeCreateTime;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initPreviousPageCGIWithAnchorFinderUsername:(id)arg1 beforeNoticeCreateTime:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initNextPageCGIWithAnchorFinderUsername:(id)arg1 afterNoticeCreateTime:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithNoticeId:(id)arg1 verifyInfo:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end

