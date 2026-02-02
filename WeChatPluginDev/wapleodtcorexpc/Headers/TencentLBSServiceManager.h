//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentLBSServiceManager : NSObject
{
    NSString *_deviceID;
}

+ (id)sharedInsance;
- (void).cxx_destruct;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;

@end

