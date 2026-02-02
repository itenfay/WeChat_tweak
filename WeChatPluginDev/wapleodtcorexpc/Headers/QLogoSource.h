//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QLogoSource : NSObject
{
    int _priority;
    long long _rule;
    NSString *_frontierName;
    NSString *_logoName;
    NSString *_logoURL;
    NSString *_logoNightURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *logoNightURL; // @synthesize logoNightURL=_logoNightURL;
@property(copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(copy, nonatomic) NSString *logoName; // @synthesize logoName=_logoName;
@property(copy, nonatomic) NSString *frontierName; // @synthesize frontierName=_frontierName;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) long long rule; // @synthesize rule=_rule;

@end

