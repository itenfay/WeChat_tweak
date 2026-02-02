//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, WCURLSession, WCURLSessionDownloadTask;

@interface WCURLSessionDownloader : NSObject
{
    WCURLSession *_urlSession;
    WCURLSessionDownloadTask *_downloadTask;
    NSMutableData *_receiveData;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain, nonatomic) WCURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) WCURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)WCURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)startTaskWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithUrlString:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

