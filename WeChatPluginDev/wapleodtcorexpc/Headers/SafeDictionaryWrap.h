//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSRecursiveLock;

@interface SafeDictionaryWrap
{
    NSRecursiveLock *_lock;
    NSDictionary *_dic;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)safeSetDictionrary:(id)arg1;
- (id)init;

@end

