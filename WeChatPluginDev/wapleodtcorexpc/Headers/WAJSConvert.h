//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAJSConvert : NSObject
{
}

+ (void)jsObjectSetArrayBuffer:(struct OpaqueJSValue *)arg1 withData:(id)arg2 context:(struct OpaqueJSContext *)arg3;
+ (id)compatible_getDataWithArrayBuffer:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)compatible_jsObjectMakeArrayBufferWithData:(id)arg1 context:(struct OpaqueJSContext *)arg2;
+ (void *)getDataWithArrayBuffer:(struct OpaqueJSValue *)arg1 length:(unsigned long long *)arg2 context:(struct OpaqueJSContext *)arg3;
+ (id)getDataWithArrayBuffer:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)jsObjectMakeArrayBufferWithData:(id)arg1 context:(struct OpaqueJSContext *)arg2 shared:(_Bool)arg3;

@end

