//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSURLSessionDownloadTask;

@interface MPPageResourceDownloadTaskContext : NSObject
{
    unsigned int _templateType;
    NSURLSessionDownloadTask *_downloadTask;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;

@end
