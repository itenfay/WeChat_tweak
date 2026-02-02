//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebPrefetchDownloadTaskRequest, NSDictionary, NSString;

@interface MMWebPrefetchDownloadTaskResult
{
    _Bool _notModified;
    _Bool _isRedirect;
    unsigned int _dataSize;
    unsigned int _downloadTime;
    MMWebPrefetchDownloadTaskRequest *_request;
    NSDictionary *_respHeaderFields;
    NSString *_redirectUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(retain, nonatomic) NSDictionary *respHeaderFields; // @synthesize respHeaderFields=_respHeaderFields;
@property(nonatomic) _Bool notModified; // @synthesize notModified=_notModified;
@property(retain, nonatomic) MMWebPrefetchDownloadTaskRequest *request; // @synthesize request=_request;
- (id)description;

@end

