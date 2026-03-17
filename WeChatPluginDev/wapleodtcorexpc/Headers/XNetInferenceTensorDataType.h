//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XNetInferenceTensorDataType : NSObject
{
    int _underlying;
}

+ (id)UInt64;
+ (id)UInt32;
+ (id)UInt16;
+ (id)UInt8;
+ (id)Float64;
+ (id)Float32;
+ (id)Float16;
+ (id)Int64;
+ (id)Int32;
+ (id)Int16;
+ (id)Int8;
+ (id)dataTypeWithUnderlying:(const int *)arg1;
- (_Bool)isEqualToDataType:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)stride;
- (const int *)underlying;
- (id)initWithUnderlying:(const int *)arg1;

@end

