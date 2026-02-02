//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionProductDetail : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_iconurl;
    NSString *_productid;
    NSString *_digest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) NSString *productid; // @synthesize productid=_productid;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

