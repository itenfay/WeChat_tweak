//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPayManageLabel : NSObject
{
    unsigned int _jumpType;
    NSString *_title;
    NSString *_desc;
    NSString *_logoUrl;
    NSString *_jumpUrl;
    NSString *_username;
    NSString *_path;
}

+ (id)genFromDict:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

