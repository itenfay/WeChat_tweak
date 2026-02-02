//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface MBPackageLogic : NSObject
{
    NSMutableDictionary *dicCacheFileInfo;
    CDUnknownBlockType onFinishDownloadPkgBlock;
    _Bool _downloadFinished;
    unsigned int _version;
    int _debugModeType;
    unsigned int _devUin;
    NSString *_appId;
    NSURL *_wxapkgPathUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *wxapkgPathUrl; // @synthesize wxapkgPathUrl=_wxapkgPathUrl;
@property(nonatomic) _Bool downloadFinished; // @synthesize downloadFinished=_downloadFinished;
@property(nonatomic) unsigned int devUin; // @synthesize devUin=_devUin;
@property(nonatomic) int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)getCheckSumMD5:(id)arg1;
- (_Bool)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (_Bool)hasLocalCacheDataWithFullUrl:(id)arg1;
- (void)setupFileInfoByWxaPkgPath:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)download;
- (void)setupDownloadFinishedBlock:(CDUnknownBlockType)arg1;
- (id)initWithAppid:(id)arg1 version:(unsigned int)arg2 debugMode:(unsigned long long)arg3 devUin:(unsigned int)arg4;
- (void)dealloc;

@end

