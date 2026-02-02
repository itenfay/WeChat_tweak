//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QDataCacheBase : NSObject
{
    NSString *_version;
    NSString *_basePath;
}

+ (void)clearCache;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (id)initWithVersion:(id)arg1;
- (id)getCacheData:(id)arg1;
- (_Bool)putCacheData:(id)arg1;
- (int)tileType;

@end

