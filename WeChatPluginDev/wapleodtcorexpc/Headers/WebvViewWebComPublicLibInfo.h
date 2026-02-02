//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WebvViewWebComPublicLibInfo
{
    unsigned int _libType;
    long long _version;
    NSString *_iframeUrlPattern;
    NSArray *_arrIFrameMatrixFormat;
    NSString *_wxTagJS;
    NSString *_webcomptJS;
    NSString *_webSkeletonHtmlString;
    NSString *_webPrefetchJS;
}

+ (id)dataWithFileName:(id)arg1 unpackPkg:(void *)arg2;
+ (id)publicInfoFromPkgFilePath:(id)arg1 minVersion:(long long)arg2;
+ (id)currentBundlePublicInfoWithMMResVersion:(unsigned long long)arg1;
+ (id)currentMMResInfo;
+ (id)currentDebugPkgInfo;
+ (id)newSessionPublicLibInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned int libType; // @synthesize libType=_libType;
@property(copy, nonatomic) NSString *webPrefetchJS; // @synthesize webPrefetchJS=_webPrefetchJS;
@property(copy, nonatomic) NSString *webSkeletonHtmlString; // @synthesize webSkeletonHtmlString=_webSkeletonHtmlString;
@property(copy, nonatomic) NSString *webcomptJS; // @synthesize webcomptJS=_webcomptJS;
@property(copy, nonatomic) NSString *wxTagJS; // @synthesize wxTagJS=_wxTagJS;
@property(retain, nonatomic) NSArray *arrIFrameMatrixFormat; // @synthesize arrIFrameMatrixFormat=_arrIFrameMatrixFormat;
@property(copy, nonatomic) NSString *iframeUrlPattern; // @synthesize iframeUrlPattern=_iframeUrlPattern;
@property(nonatomic) long long version; // @synthesize version=_version;

@end

