//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebPrefetchInjectTaskRequest, NSObject;
@protocol OS_dispatch_queue;

@interface MMWebPrefetchInjectTask
{
    _Bool _isCancel;
    MMWebPrefetchInjectTaskRequest *_request;
    CDUnknownBlockType _completion;
    unsigned long long _startTime;
    NSObject<OS_dispatch_queue> *_workerThread;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerThread; // @synthesize workerThread=_workerThread;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMWebPrefetchInjectTaskRequest *request; // @synthesize request=_request;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)valueForAttribute:(id)arg1 withHtmlTag:(id)arg2;
- (id)fileContentWithUrl:(id)arg1;
- (id)completeRelativeUrlIfNeed:(id)arg1 withBaseUrl:(id)arg2;
- (void)updateHeaderFieldWithDomain:(id)arg1 identifier:(id)arg2 prefetchOption:(unsigned int)arg3 updateDateTime:(unsigned int)arg4;
- (id)replaceCssExternalTag:(id)arg1 withContent:(id)arg2 withHtmlString:(id)arg3 success:(_Bool *)arg4;
- (id)replaceCssExternalTag:(id)arg1 withNewTagResUrl:(id)arg2 withHtmlString:(id)arg3 success:(_Bool *)arg4;
- (id)replaceJsExternalTag:(id)arg1 withJsContent:(id)arg2 withHtmlString:(id)arg3 withAttrArr:(id)arg4 success:(_Bool *)arg5;
- (id)replaceJsExternalTag:(id)arg1 withNewTagResUrl:(id)arg2 withHtmlString:(id)arg3 success:(_Bool *)arg4;
- (id)extractAllExternalLinkTagFromHtmlString:(id)arg1;
- (_Bool)checkScriptTagContainDefer:(id)arg1;
- (_Bool)shouldIgnoreScriptWithAttrArr:(id)arg1;
- (id)arrAttrForScriptTag:(id)arg1;
- (id)extractAllExternalScriptTagFromHtmlString:(id)arg1;
- (_Bool)injectPrefetchResToHTML:(id *)arg1;
- (id)generateValidPkgResInfoWithTagInfo:(id)arg1 basePkgInfo:(id)arg2 mapedResName:(id)arg3;
- (_Bool)injectPrefetchPkg:(id *)arg1;
- (id)getMapedResNameWithFullSrc:(id)arg1 resNameMapDict:(id)arg2;
- (id)genResNameMapDict:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

