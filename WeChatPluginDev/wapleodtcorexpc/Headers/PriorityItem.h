//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PriorityItem : NSObject
{
    id _item;
    long long _priority;
}

- (void).cxx_destruct;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 andPriority:(long long)arg2;

@end

