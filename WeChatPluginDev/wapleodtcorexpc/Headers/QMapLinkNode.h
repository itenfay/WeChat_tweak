//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapLinkNode : NSObject
{
    QMapLinkNode *_prev;
    QMapLinkNode *_next;
    id _object;
    id _key;
    unsigned long long _cost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak QMapLinkNode *next; // @synthesize next=_next;
@property(nonatomic) __weak QMapLinkNode *prev; // @synthesize prev=_prev;
- (id)initWithObject:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3;

@end

