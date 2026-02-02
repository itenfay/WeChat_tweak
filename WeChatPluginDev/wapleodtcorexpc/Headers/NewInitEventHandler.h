//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NewInitEventHandler
{
    NSData *m_curKey;
    NSData *m_maxKey;
    NSObject<OS_dispatch_queue> *m_worker;
}

- (void).cxx_destruct;
- (void)saveKeyBuffer:(unsigned int)arg1 withSelector:(unsigned int)arg2 withCurKey:(id)arg3 withMaxKey:(id)arg4;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end

