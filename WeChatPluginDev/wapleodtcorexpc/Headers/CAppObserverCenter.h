//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface CAppObserverCenter : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_eventObserverDict;
    NSMutableDictionary *m_messageObserverDict;
    NSMutableDictionary *m_pbEventObserverDict;
    NSMutableDictionary *m_observer2EventDict;
    NSMutableDictionary *m_observer2MessageDict;
    NSMutableDictionary *m_observer2PbEventDict;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)NotifyFromMainCtrl:(id)arg1 Event:(unsigned int)arg2;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)observerListByPBEvent:(id)arg1;
- (id)observerListByMessage:(id)arg1;
- (id)observerListByEvent:(id)arg1;
- (void)removePBEventObserverListItemByObject:(id)arg1;
- (void)removePBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addPBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeMessageObserverListItemByObject:(id)arg1;
- (void)addMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeEventObserverListItemByObject:(id)arg1;
- (void)removeEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeObserverObject:(id)arg1 event2Observer:(id)arg2 observer2Event:(id)arg3;
- (void)removeObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)addObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (id)observerKey:(id)arg1;
- (id)init;

@end

