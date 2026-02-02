//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface WABufferObject : NSObject
{
    void *_buffer;
    long long _length;
    struct OpaqueJSValue *_jsObject;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct OpaqueJSValue *jsObject; // @synthesize jsObject=_jsObject;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) void *buffer; // @synthesize buffer=_buffer;

@end

