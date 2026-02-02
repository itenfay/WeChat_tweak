//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskJumpWeAppOperation : NSObject
{
    unsigned long long _type;
    NSString *_fromAppId;
    NSString *_toAppId;
    unsigned long long _jumpScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long jumpScene; // @synthesize jumpScene=_jumpScene;
@property(retain, nonatomic) NSString *toAppId; // @synthesize toAppId=_toAppId;
@property(retain, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;

@end

