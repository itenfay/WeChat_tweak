//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface SafeMutableDictionary : NSObject
{
    NSMutableDictionary *_m_dic;
    NSRecursiveLock *_m_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableDictionary *m_dic; // @synthesize m_dic=_m_dic;
- (id)dictionaryAllKeys;
- (void)dictionaryRemoveObjectForKey:(id)arg1;
- (id)dictionaryGetObjectForKey:(id)arg1;
- (void)dictionarySetObject:(id)arg1 key:(id)arg2;
- (void)dictionaryReset;
- (id)init;

@end

