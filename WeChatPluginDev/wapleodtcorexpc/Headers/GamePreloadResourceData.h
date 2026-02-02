//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GamePreloadResourceData : NSObject
{
    NSString *_resourceUrl;
    long long _randomTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long randomTime; // @synthesize randomTime=_randomTime;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;

@end

