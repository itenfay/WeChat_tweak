//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPYYClassMethodInfo : NSObject
{
    struct objc_method *_method;
    NSString *_name;
    SEL _sel;
    CDUnknownFunctionPointerType _imp;
    NSString *_typeEncoding;
    NSString *_returnTypeEncoding;
    NSArray *_argumentTypeEncodings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *argumentTypeEncodings; // @synthesize argumentTypeEncodings=_argumentTypeEncodings;
@property(readonly, nonatomic) NSString *returnTypeEncoding; // @synthesize returnTypeEncoding=_returnTypeEncoding;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) CDUnknownFunctionPointerType imp; // @synthesize imp=_imp;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_method *method; // @synthesize method=_method;
- (id)initWithMethod:(struct objc_method *)arg1;

@end

