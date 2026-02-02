//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol MMLiteAppDownloadMgrDelegate;

@interface MMLiteAppDownloadMgr : NSObject
{
    id <MMLiteAppDownloadMgrDelegate> _delegate;
    NSURLSession *_session;
    NSMutableDictionary *_downloadingStatus;
    NSMutableArray *_downloadingItemQueue;
    NSMutableArray *_waitingItemQueue;
    shared_ptr_7048591f _cronet_cb_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_7048591f cronet_cb_; // @synthesize cronet_cb_=_cronet_cb_;
@property(retain, nonatomic) NSMutableArray *waitingItemQueue; // @synthesize waitingItemQueue=_waitingItemQueue;
@property(retain, nonatomic) NSMutableArray *downloadingItemQueue; // @synthesize downloadingItemQueue=_downloadingItemQueue;
@property(retain, nonatomic) NSMutableDictionary *downloadingStatus; // @synthesize downloadingStatus=_downloadingStatus;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MMLiteAppDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)OnCronetDownloadComplete:(const void *)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1 isDownloadMediaResource:(_Bool)arg2;
- (void)checkQueue;
- (void)startDownloadLiteApp:(id)arg1;
- (void)addDownloadLiteAppTask:(id)arg1 reporter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

