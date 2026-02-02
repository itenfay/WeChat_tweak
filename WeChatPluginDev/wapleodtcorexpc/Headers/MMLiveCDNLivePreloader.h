//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCDNLivePreloadItem, NSMutableArray, NSMutableSet, NSString, NSURLSession, NSURLSessionDataTask, UIView;
@protocol MMLiveCDNLivePreloaderDelegate;

@interface MMLiveCDNLivePreloader : NSObject
{
    id <MMLiveCDNLivePreloaderDelegate> _delegate;
    NSMutableArray *_preloadQueue;
    MMLiveCDNLivePreloadItem *_curPreloadingItem;
    UIView *_redundantView;
    NSMutableSet *_preloadedUrlSet;
    NSURLSession *_preloadSession;
    NSURLSessionDataTask *_preloadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDataTask *preloadTask; // @synthesize preloadTask=_preloadTask;
@property(retain, nonatomic) NSURLSession *preloadSession; // @synthesize preloadSession=_preloadSession;
@property(retain, nonatomic) NSMutableSet *preloadedUrlSet; // @synthesize preloadedUrlSet=_preloadedUrlSet;
@property(retain, nonatomic) UIView *redundantView; // @synthesize redundantView=_redundantView;
@property(retain, nonatomic) MMLiveCDNLivePreloadItem *curPreloadingItem; // @synthesize curPreloadingItem=_curPreloadingItem;
@property(retain, nonatomic) NSMutableArray *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(nonatomic) __weak id <MMLiveCDNLivePreloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)errorWithReason:(id)arg1;
- (void)callbackErrorWithReason:(id)arg1 url:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)finishPreload;
- (void)doPreload;
- (void)stopAllPreload;
- (void)_doStopPreloadWithUrl:(id)arg1;
- (void)stopPreloadWithUrl:(id)arg1;
- (void)addUrlToPreloadQueue:(id)arg1 andFinderDataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

