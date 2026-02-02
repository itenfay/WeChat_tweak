//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol MMWormholeTransiting;

@interface MMWormhole : NSObject
{
    id <MMWormholeTransiting> _wormholeMessenger;
    NSMutableDictionary *_listenerBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *listenerBlocks; // @synthesize listenerBlocks=_listenerBlocks;
@property(retain, nonatomic) id <MMWormholeTransiting> wormholeMessenger; // @synthesize wormholeMessenger=_wormholeMessenger;
- (void)stopListeningForMessageWithIdentifier:(id)arg1;
- (void)listenForMessageWithIdentifier:(id)arg1 listener:(CDUnknownBlockType)arg2;
- (void)clearMessageContentsForIdentifier:(id)arg1;
- (id)messageWithIdentifier:(id)arg1;
- (void)passMessageObject:(id)arg1 identifier:(id)arg2;
- (void)notifyListenerForMessageWithIdentifier:(id)arg1 message:(id)arg2;
- (id)listenerBlockForIdentifier:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)unregisterForNotificationsWithIdentifier:(id)arg1;
- (void)registerForNotificationsWithIdentifier:(id)arg1;
- (void)sendNotificationForMessageWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

