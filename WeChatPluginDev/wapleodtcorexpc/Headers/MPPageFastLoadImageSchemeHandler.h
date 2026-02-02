//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPPageFastLoadWXPicDecoder, NSArray, NSMutableSet, NSString, NSURLSession;
@protocol MPPageFastLoadImageSchemeHandlerDelegate, OS_dispatch_queue;

@interface MPPageFastLoadImageSchemeHandler : NSObject
{
    id <MPPageFastLoadImageSchemeHandlerDelegate> _delegate;
    NSURLSession *_imageRequestSession;
    NSMutableSet *_ongoingTasks;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    MPPageFastLoadWXPicDecoder *_wxPicDecoder;
    NSArray *_preloadImageIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *preloadImageIDs; // @synthesize preloadImageIDs=_preloadImageIDs;
@property(retain, nonatomic) MPPageFastLoadWXPicDecoder *wxPicDecoder; // @synthesize wxPicDecoder=_wxPicDecoder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property(retain, nonatomic) NSMutableSet *ongoingTasks; // @synthesize ongoingTasks=_ongoingTasks;
@property(retain, nonatomic) NSURLSession *imageRequestSession; // @synthesize imageRequestSession=_imageRequestSession;
@property(nonatomic) __weak id <MPPageFastLoadImageSchemeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCacheAction:(unsigned int)arg1;
- (void)decodeAndFinishForTask:(id)arg1 imageData:(id)arg2;
- (void)finishTask:(id)arg1 withResponse:(id)arg2 data:(id)arg3;
- (id)create404ResponseForURL:(id)arg1;
- (id)createSuccessResponseForImageData:(id)arg1 contentType:(id)arg2 url:(id)arg3;
- (id)getImageTypeFromTask:(id)arg1;
- (id)createOnlineRequestURLForURL:(id)arg1;
- (void)fallbackToOnlineRequestForTask:(id)arg1 pageDataKeyURL:(id)arg2 shouldSaveCache:(_Bool)arg3;
- (void)getImageFromCacheIfNeedForTask:(id)arg1 pageDataKeyURL:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)loadPreloadImageIDsWithPageURL:(id)arg1;
- (id)init;
- (id)customScheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

