//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMResourceMgrUtility : NSObject
{
}

+ (id)appendRandomParamToUrlStr:(id)arg1;
+ (int)crc32WithData:(id)arg1;
+ (id)getMd5FromStr:(id)arg1 deleteUrlScheme:(_Bool)arg2;
+ (id)getUrlWithoutParam:(id)arg1;
+ (id)getResourceDirectDownloadDir;
+ (id)getResourceCheckResponseDataPath;
+ (id)getResourceInfoDBPath;
+ (id)getTestResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2 WithEID:(unsigned int)arg3;
+ (id)getResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2;
+ (id)getResourcePath:(long long)arg1;
+ (id)getResourceDirDependentOnClientVersion:(long long)arg1;
+ (id)getResourceDir:(long long)arg1;
+ (id)getResourceCdnDownloadSuccessDir;
+ (id)getResourceCdnDownloadDir;
+ (id)getResourceRootDir;

@end

