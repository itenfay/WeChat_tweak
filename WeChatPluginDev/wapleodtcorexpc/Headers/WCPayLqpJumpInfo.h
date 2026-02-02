//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayLqpJumpInfo : NSObject
{
    unsigned int _type;
    NSString *_url;
    NSString *_mini_username;
    NSString *_mini_pagepath;
}

- (void).cxx_destruct;
@property(retain) NSString *mini_pagepath; // @synthesize mini_pagepath=_mini_pagepath;
@property(retain) NSString *mini_username; // @synthesize mini_username=_mini_username;
@property(retain) NSString *url; // @synthesize url=_url;
@property unsigned int type; // @synthesize type=_type;

@end

