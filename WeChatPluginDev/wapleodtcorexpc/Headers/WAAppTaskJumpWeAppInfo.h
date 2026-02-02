//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskJumpWeAppInfo : NSObject
{
    NSString *_appID;
    unsigned long long _jumpRole;
    unsigned long long _jumpScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long jumpScene; // @synthesize jumpScene=_jumpScene;
@property(nonatomic) unsigned long long jumpRole; // @synthesize jumpRole=_jumpRole;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)description;
- (id)init;

@end

