//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPYYClassIvarInfo : NSObject
{
    struct objc_ivar *_ivar;
    NSString *_name;
    long long _offset;
    NSString *_typeEncoding;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
- (id)initWithIvar:(struct objc_ivar *)arg1;

@end

