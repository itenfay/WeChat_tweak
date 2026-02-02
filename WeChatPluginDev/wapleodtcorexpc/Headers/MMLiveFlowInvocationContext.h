//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveFlowInvocationContext : NSObject
{
    NSString *_invocationId;
}

@property(retain, nonatomic) NSString *invocationId; // @synthesize invocationId=_invocationId;
- (id)description;

@end

