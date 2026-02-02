//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionUrl : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_link;
    NSString *_iconurl;
    NSString *_digest;
    NSString *_username;
    NSString *_nickname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

