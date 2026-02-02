//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QMapLinkNode;

@interface QMapLinkList : NSObject
{
    unsigned long long _count;
    unsigned long long _cost;
    QMapLinkNode *_head;
    QMapLinkNode *_trail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMapLinkNode *trail; // @synthesize trail=_trail;
@property(retain, nonatomic) QMapLinkNode *head; // @synthesize head=_head;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)removeAllObjects;
- (id)removeLast;
- (void)remove:(id)arg1;
- (void)addLast:(id)arg1;
- (void)addFirst:(id)arg1;

@end

