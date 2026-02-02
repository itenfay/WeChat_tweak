//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJClipBundleInfo : NSObject
{
    NSString *_bundleID;
    unsigned long long _bundleSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bundleSize; // @synthesize bundleSize=_bundleSize;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithBundleID:(id)arg1 bundleSize:(unsigned long long)arg2;

@end

