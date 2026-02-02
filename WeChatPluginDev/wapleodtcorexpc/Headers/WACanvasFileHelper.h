//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface WACanvasFileHelper : NSObject
{
    NSURLSession *_session;
    NSMutableDictionary *_dicCanvasId2TaskQueue;
}

+ (id)trimmingWhitespaceWithStr:(id)arg1;
+ (unsigned int)genDownloadTaskId;
+ (id)pathForResWithUrl:(id)arg1;
+ (id)pathOfCacheDir;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *dicCanvasId2TaskQueue; // @synthesize dicCanvasId2TaskQueue=_dicCanvasId2TaskQueue;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)syncDownloadFileWithUrl:(id)arg1 filePath:(id)arg2 canvasId:(id)arg3;
- (void)removeTaskWithCanvasId:(id)arg1 taskId:(unsigned int)arg2;
- (void)addTaskToQueue:(id)arg1 canvasId:(id)arg2 taskId:(unsigned int)arg3;
- (void)cancelAllTask:(id)arg1;
- (id)subThread_syncGetFileDataWithUrl:(id)arg1 canvasId:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

