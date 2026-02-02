//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSNSRewardInfo : NSObject
{
    unsigned long long amount;
    NSString *sendId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId;
@property(nonatomic) unsigned long long amount; // @synthesize amount;
- (id)init;

@end

