//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DeviceBrandJumpInfo : NSObject
{
    unsigned long long _jumpType;
    NSString *_brandFinderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandFinderUsername; // @synthesize brandFinderUsername=_brandFinderUsername;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (id)init;

@end

