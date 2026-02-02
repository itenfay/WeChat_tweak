//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WAPackageDownloadTask;
@protocol WAPackageDownloadTaskDelegate;

@interface WAPackageCronetDownloadTask : NSObject
{
    struct shared_ptr<WAPkgCronetDownloadCallback> m_pCallback;
    struct CronetTaskParams params_download;
    NSString *_url;
    double _timeout;
    CDUnknownBlockType _completionHandler;
    basic_string_5909a4e2 _cronetTaskID;
    NSString *_nsCronetTaskID;
    _Bool _isCanceled;
    id <WAPackageDownloadTaskDelegate> _delegate;
    WAPackageDownloadTask *_taskObj;
    unsigned long long _taskStartTime;
    NSDictionary *_headerDic;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *headerDic; // @synthesize headerDic=_headerDic;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(retain, nonatomic) WAPackageDownloadTask *taskObj; // @synthesize taskObj=_taskObj;
@property(nonatomic) __weak id <WAPackageDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)toWADownloadDNSType:(int)arg1;
- (int)toCronetDnsType:(unsigned int)arg1;
- (id)getProtocolInfoFromCronetTaskResult:(const void *)arg1;
- (unsigned long long)getProtocolFromCronetTaskResult:(const void *)arg1;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)OnCompleted:(const void *)arg1;
- (void)cronetDownloadTimeOut;
- (void)cronetDownloadBytesOverFlow;
- (void)cancel;
- (_Bool)callCronetDownload;
- (void)createDirectlyCronetDownloadTask:(id)arg1;
- (_Bool)isFollowCronetRedirect;
- (void)dealloc;

@end

