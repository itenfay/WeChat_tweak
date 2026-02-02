//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionRefer : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_referKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *referKey; // @synthesize referKey=_referKey;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

