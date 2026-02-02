//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderDoublyLinkedNode : NSObject
{
    WCFinderDoublyLinkedNode *_prevNode;
    WCFinderDoublyLinkedNode *_nextNode;
    id _key;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(retain, nonatomic) WCFinderDoublyLinkedNode *nextNode; // @synthesize nextNode=_nextNode;
@property(retain, nonatomic) WCFinderDoublyLinkedNode *prevNode; // @synthesize prevNode=_prevNode;
- (id)description;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

