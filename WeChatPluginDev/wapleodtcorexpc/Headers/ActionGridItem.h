//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionGridItem : NSObject
{
    NSString *_name;
    NSString *_iconUrl;
    NSString *_productID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

