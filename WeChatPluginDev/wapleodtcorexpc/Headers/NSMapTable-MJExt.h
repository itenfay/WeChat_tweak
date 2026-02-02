//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (MJExt)
- (id)mj_anyObject;
- (id)mj_anyKey;
- (id)mj_allValues;
- (id)mj_allKeys;
- (void)mj_removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)sc_allValues;
- (id)sc_allKeys;
- (void)sc_removeObjectsForKeys:(id)arg1;
- (void)sc_setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

