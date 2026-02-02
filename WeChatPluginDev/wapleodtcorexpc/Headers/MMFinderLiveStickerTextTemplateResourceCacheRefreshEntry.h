//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveStickerTextTemplateResourceCacheRefreshEntry : NSObject
{
    NSString *_resourceMd5Hash;
    NSString *_extractedResourcePath;
    unsigned long long _lastRefreshUnixEpochTimeInMilliseconds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastRefreshUnixEpochTimeInMilliseconds; // @synthesize lastRefreshUnixEpochTimeInMilliseconds=_lastRefreshUnixEpochTimeInMilliseconds;
@property(retain, nonatomic) NSString *extractedResourcePath; // @synthesize extractedResourcePath=_extractedResourcePath;
@property(retain, nonatomic) NSString *resourceMd5Hash; // @synthesize resourceMd5Hash=_resourceMd5Hash;

@end

