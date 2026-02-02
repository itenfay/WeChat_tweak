//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (CollectionMerge)
- (void)collectionMergeWithDictionary:(id)arg1;
- (id)syncQueue;
- (id)threadSafeObjectForKey:(id)arg1;
- (void)threadSafeRemoveObjectForKey:(id)arg1;
- (void)threadSafeSyncSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)safeRemoveObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
@end

