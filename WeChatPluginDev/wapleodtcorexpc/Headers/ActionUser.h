//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionUser : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_username;
    NSString *_nickname;
    NSString *_strBeforeFollow;
    NSString *_strAfterFollow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *strAfterFollow; // @synthesize strAfterFollow=_strAfterFollow;
@property(retain, nonatomic) NSString *strBeforeFollow; // @synthesize strBeforeFollow=_strBeforeFollow;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

