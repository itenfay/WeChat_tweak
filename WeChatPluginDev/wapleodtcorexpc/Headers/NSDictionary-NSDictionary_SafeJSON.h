//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NSDictionary_SafeJSON)
- (_Bool)containsKey:(id)arg1 value:(id)arg2;
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)floatForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)int64ForKey:(id)arg1;
- (int)int32ForKey:(id)arg1 defaultValue:(int)arg2;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 DefaultValue:(long long)arg2;
- (long long)integerForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)stringForKey:(id)arg1;
@end

