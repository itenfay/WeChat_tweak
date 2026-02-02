//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSUPnPDiscoveryConfiguration : NSObject
{
    NSString *_searchTarget;
    double _discoverTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double discoverTimeInterval; // @synthesize discoverTimeInterval=_discoverTimeInterval;
@property(copy, nonatomic) NSString *searchTarget; // @synthesize searchTarget=_searchTarget;
- (id)init;

@end

