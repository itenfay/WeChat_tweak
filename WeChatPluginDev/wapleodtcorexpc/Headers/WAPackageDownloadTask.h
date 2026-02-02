//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURLSessionDownloadTask, WAPackageCronetDownloadTask;

@interface WAPackageDownloadTask : NSObject
{
    _Bool _needGzip;
    _Bool _enableDownloadResumption;
    unsigned int _retryCount;
    unsigned int _dnsType;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSURLSessionDownloadTask *_downloadTask;
    WAPackageCronetDownloadTask *_cronetTask;
    NSString *_downloadUrl;
    NSString *_fileName;
    NSString *_directoryPath;
    NSDate *_startDate;
    NSString *_appid;
    unsigned long long _version;
    unsigned long long _downloadType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDownloadResumption; // @synthesize enableDownloadResumption=_enableDownloadResumption;
@property(nonatomic) unsigned int dnsType; // @synthesize dnsType=_dnsType;
@property(nonatomic) _Bool needGzip; // @synthesize needGzip=_needGzip;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) WAPackageCronetDownloadTask *cronetTask; // @synthesize cronetTask=_cronetTask;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (id)initWithDownloadTask:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

