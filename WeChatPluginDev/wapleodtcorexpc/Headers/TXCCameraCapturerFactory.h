//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TXCDispatchQueue;

@interface TXCCameraCapturerFactory : NSObject
{
    NSMutableDictionary *_capturers;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableDictionary *capturers; // @synthesize capturers=_capturers;
- (id)createCapturerWithIdentifier:(id)arg1;
- (id)capturerWithIdentifier:(id)arg1;
- (id)capturerOfType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

