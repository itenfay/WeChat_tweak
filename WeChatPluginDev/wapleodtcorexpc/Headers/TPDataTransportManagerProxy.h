//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class TPDataTransportManagerProxyDelegate, TPPlayerEventPublisher, TPProxyPlayManager;
@protocol TPProxyPlayDelegate;

@interface TPDataTransportManagerProxy : NSProxy
{
    TPProxyPlayManager *_manager;
    id <TPProxyPlayDelegate> _outerDelegate;
    TPDataTransportManagerProxyDelegate *_proxyDelegate;
    TPPlayerEventPublisher *_publisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) TPDataTransportManagerProxyDelegate *proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
@property(nonatomic) __weak id <TPProxyPlayDelegate> outerDelegate; // @synthesize outerDelegate=_outerDelegate;
@property(retain, nonatomic) TPProxyPlayManager *manager; // @synthesize manager=_manager;
- (void)pushEventAfterInvokeIfNeed:(id)arg1;
- (void)hookDelegateIfNeed:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initDataTransportManagerProxy:(id)arg1 withContext:(id)arg2;

@end

