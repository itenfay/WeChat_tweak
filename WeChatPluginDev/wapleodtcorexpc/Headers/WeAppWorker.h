//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, WAJSCoreService, WAWorkerRuntime;

@interface WeAppWorker : NSObject
{
    WAWorkerRuntime *_context;
    unsigned int _workerId;
    int _bufferId;
    WAJSCoreService *_service;
    NSString *_workerPath;
    NSMutableSet *_eventHandlers;
    NSString *_userFile;
    long long _dataSize;
}

- (void).cxx_destruct;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSString *userFile; // @synthesize userFile=_userFile;
@property(retain) NSMutableSet *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) NSString *workerPath; // @synthesize workerPath=_workerPath;
@property(nonatomic) int bufferId; // @synthesize bufferId=_bufferId;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)sourceOpenSDKAppID;
- (_Bool)isParentViewControllerDidAppear:(id)arg1;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getWAContact;
- (id)getBase64Buffer;
- (void)setListenBuffer:(int)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)getEventHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getAppId;
- (id)getCompressedFileData:(id)arg1 compressionAlgorithm:(id)arg2;
- (id)getFileData:(id)arg1;
- (id)getFrameData;
- (void)onMessage:(id)arg1;
- (id)getFrame;
- (void)onCreate;
- (unsigned int)getWorkerId;
- (void)releaseWorker;
- (void)stopWorker;
- (void)sendMessage:(id)arg1;
- (void)initJSContext:(id)arg1;
- (void)initWebView;
- (void)dealloc;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

