//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KVOController, NSString;

@interface KVOInfo : NSObject
{
    KVOController *m_controller;
    NSString *m_keyPath;
    unsigned long long m_options;
    unsigned char m_state;
    SEL m_action;
    void *m_context;
    CDUnknownBlockType m_block;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 action:(SEL)arg5 context:(void *)arg6;

@end

