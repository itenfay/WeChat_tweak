//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface BrandLemmaTable : NSObject
{
    NSRecursiveLock *_accessLock;
    NSArray *_entries;
    NSMutableDictionary *_keyToEntry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *keyToEntry; // @synthesize keyToEntry=_keyToEntry;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSRecursiveLock *accessLock; // @synthesize accessLock=_accessLock;
- (id)getLemmaForKey:(id)arg1 type:(unsigned int)arg2 locale:(id)arg3;
- (void)constructMapping;
- (id)initWithPath:(id)arg1;

@end

