//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMResDownloadInfo, MMResDownloadUrlInfo;

@interface MMResourceDownloadTaskContext : NSObject
{
    unsigned int _resType;
    unsigned int _resSubType;
    unsigned int _version;
    unsigned int _priority;
    MMResDownloadUrlInfo *_downloadUrlInfo;
    MMResDownloadInfo *_downloadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMResDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) MMResDownloadUrlInfo *downloadUrlInfo; // @synthesize downloadUrlInfo=_downloadUrlInfo;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;

@end

