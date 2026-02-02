//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WAPackageDownloadParams : NSObject
{
    _Bool _needGzip;
    _Bool _enableDownloadResumption;
    NSURL *_downloadUrl;
    NSString *_appId;
    unsigned long long _version;
    unsigned long long _downloadScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDownloadResumption; // @synthesize enableDownloadResumption=_enableDownloadResumption;
@property(nonatomic) _Bool needGzip; // @synthesize needGzip=_needGzip;
@property(nonatomic) unsigned long long downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSURL *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
- (id)init;

@end

