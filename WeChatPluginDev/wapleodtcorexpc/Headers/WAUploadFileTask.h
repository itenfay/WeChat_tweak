//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSString, NSURLSession, NSURLSessionUploadTask, WAUploadFileConfig, WAUploadFileProgressInfo;
@protocol WAUploadFileTaskDelegate;

@interface WAUploadFileTask : NSObject
{
    struct shared_ptr<CronetUploadCallback> m_pCallback;
    struct CronetTaskParams params_cronet;
    struct UploadParams params_upload;
    NSString *_appID;
    NSURLSession *_urlSession;
    NSString *_taskID;
    NSURLSessionUploadTask *_task;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_responseData;
    NSString *_responseString;
    _Bool _isRedirectInvalid;
    NSString *_url;
    NSMutableDictionary *_dicContext;
    NSString *_redirectHost;
    _Bool _isCronetUpload;
    _Bool _hasCallBack;
    unsigned int _appServiceType;
    unsigned int _uploadMaxConcurrentCount;
    double _timeout;
    basic_string_5909a4e2 _cronetTaskID;
    NSString *_nsCronetTaskID;
    WAUploadFileConfig *_uploadFileConfig;
    _Bool _isIgnoreCheckDomain;
    id <WAUploadFileTaskDelegate> delegate;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    WAUploadFileProgressInfo *_lastNotNotifyProgressInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) WAUploadFileProgressInfo *lastNotNotifyProgressInfo; // @synthesize lastNotNotifyProgressInfo=_lastNotNotifyProgressInfo;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WAUploadFileTaskDelegate> delegate; // @synthesize delegate;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnUploadProgress:(long long)arg1 total:(long long)arg2;
- (void)OnCompleted:(const void *)arg1;
- (void)onCronetResponse:(id)arg1 status:(long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)flushProgressNotifcation;
- (void)notifyProgressWithTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)taskDidEnd;
- (id)filePathFromLocalID:(id)arg1;
- (void)callCompletionHandlerWithError:(id)arg1 error:(id)arg2 errNo:(id)arg3;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)markRedirectFail:(id)arg1;
- (void)didRecevieData:(id)arg1;
- (void)didCompleteCronetWithError:(id)arg1 statusCode:(long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)didCompleteWithError:(id)arg1 statusCode:(long long)arg2;
- (id)task;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (void)cancel;
- (void)anyThread_updateTotalBytesSent:(long long)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)anyThread_didCronetReceiveResponse:(id)arg1;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 filePath:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 timeoutMS:(unsigned int)arg5 userAgent:(id)arg6 referer:(id)arg7 formFields:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)callCronetUpload:(struct CronetTaskParams)arg1;
- (void)cronetUploadTimeOut;
- (void)startCronetWithURL:(id)arg1 filePath:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 timeoutMS:(unsigned int)arg5 userAgent:(id)arg6 referer:(id)arg7 formFields:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3 context:(id)arg4 uploadConfig:(id)arg5;

@end

