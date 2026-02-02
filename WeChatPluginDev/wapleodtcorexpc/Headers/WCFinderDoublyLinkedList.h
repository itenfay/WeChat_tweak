//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCFinderDoublyLinkedNode;

@interface WCFinderDoublyLinkedList : NSObject
{
    WCFinderDoublyLinkedNode *_headNode;
    WCFinderDoublyLinkedNode *_tailNode;
    NSMutableDictionary *_nodeDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *nodeDict; // @synthesize nodeDict=_nodeDict;
@property(retain, nonatomic) WCFinderDoublyLinkedNode *tailNode; // @synthesize tailNode=_tailNode;
@property(retain, nonatomic) WCFinderDoublyLinkedNode *headNode; // @synthesize headNode=_headNode;
- (id)nodeForKey:(id)arg1;
- (id)description;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)removeObjectForKey:(id)arg1;
- (id)removeTailObject;
- (void)moveObjectForKeyToHead:(id)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2 beforeObjectForKey:(id)arg3;
- (void)insertObject:(id)arg1 forKey:(id)arg2 afterObjectForKey:(id)arg3;
- (void)insertObjectToHead:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;

@end

