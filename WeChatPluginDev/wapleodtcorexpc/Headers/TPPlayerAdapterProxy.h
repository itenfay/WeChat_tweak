//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class TPEventTrackingPublisher, TPPlayerAdapter, TPPlayerAdapterProxyDelegate;
@protocol ITPPlayerBaseDelegate;

@interface TPPlayerAdapterProxy : NSProxy
{
    TPPlayerAdapter *_playerAdapter;
    id <ITPPlayerBaseDelegate> _outerDelegate;
    TPPlayerAdapterProxyDelegate *_proxyDelegate;
    TPEventTrackingPublisher *_eventTrackingPublisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPEventTrackingPublisher *eventTrackingPublisher; // @synthesize eventTrackingPublisher=_eventTrackingPublisher;
@property(retain, nonatomic) TPPlayerAdapterProxyDelegate *proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> outerDelegate; // @synthesize outerDelegate=_outerDelegate;
@property(retain, nonatomic) TPPlayerAdapter *playerAdapter; // @synthesize playerAdapter=_playerAdapter;
- (void)pushEventWithNestedInvocation:(id)arg1;
- (void)hookDelegateIfNeed:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initTPPlayerAdapterProxy:(id)arg1 withContext:(id)arg2;

@end

