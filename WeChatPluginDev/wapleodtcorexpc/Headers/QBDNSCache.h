//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface QBDNSCache : NSObject
{
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_set;
}

- (void).cxx_destruct;
- (void)store;
- (void)clear:(_Bool)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1 set:(id)arg2;

@end

