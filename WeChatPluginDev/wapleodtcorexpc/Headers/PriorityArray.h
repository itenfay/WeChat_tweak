//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PriorityArray : NSObject
{
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
- (_Bool)contains:(id)arg1;
- (_Bool)remove:(id)arg1;
- (void)add:(id)arg1 withPriority:(long long)arg2;
- (id)top;
- (id)init;

@end

