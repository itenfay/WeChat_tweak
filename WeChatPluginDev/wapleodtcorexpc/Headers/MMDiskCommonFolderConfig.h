//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMDiskCommonFolderConfig : NSObject
{
    long long _defaultTime;
    NSDictionary *_nextConfig;
}

+ (id)desForStoreTime:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *nextConfig; // @synthesize nextConfig=_nextConfig;
@property(nonatomic) long long defaultTime; // @synthesize defaultTime=_defaultTime;
- (id)description;

@end

