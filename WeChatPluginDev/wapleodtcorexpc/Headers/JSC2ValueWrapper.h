//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSC2ValueWrapper : NSObject
{
    struct OpaqueJSContext *_ctx;
    struct OpaqueJSValue *_value;
}

+ (id)valueWithRef:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;
@property(nonatomic) struct OpaqueJSValue *value; // @synthesize value=_value;
- (void)dealloc;
- (id)initWithValueRef:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;

@end

