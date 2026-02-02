//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBJSFunction : NSObject
{
    unsigned long long _handlerId;
    CDUnknownBlockType _invokeCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType invokeCallback; // @synthesize invokeCallback=_invokeCallback;
@property(nonatomic) unsigned long long handlerId; // @synthesize handlerId=_handlerId;
- (void)invokeWithDict:(id)arg1;
- (void)invoke:(id)arg1;

@end

