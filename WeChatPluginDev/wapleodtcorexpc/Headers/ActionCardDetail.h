//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionCardDetail : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_digest;
    NSString *_iconurl;
    NSString *_cardid;
    NSString *_cardext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardext; // @synthesize cardext=_cardext;
@property(retain, nonatomic) NSString *cardid; // @synthesize cardid=_cardid;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

