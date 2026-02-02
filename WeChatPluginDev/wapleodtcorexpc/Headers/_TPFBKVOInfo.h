//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPFBKVOController;

@interface _TPFBKVOInfo : NSObject
{
    TPFBKVOController *_controller;
    NSString *_keyPath;
    unsigned long long _options;
    SEL _action;
    void *_context;
    CDUnknownBlockType _block;
    unsigned char _state;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 action:(SEL)arg5 context:(void *)arg6;

@end

