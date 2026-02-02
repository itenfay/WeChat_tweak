//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayJumpInfo : NSObject
{
    unsigned int _type;
    NSString *_url;
    NSString *_username;
    NSString *_pagepath;
}

+ (id)genFromUnion:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSString *url; // @synthesize url=_url;
@property unsigned int type; // @synthesize type=_type;

@end

