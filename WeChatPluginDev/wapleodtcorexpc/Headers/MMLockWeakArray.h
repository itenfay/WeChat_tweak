//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMLockWeakArray : NSObject
{
    NSObject *_lock;
    NSMutableArray *_realArray;
}

- (void).cxx_destruct;
- (id)objects;
- (void)remove:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

