//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LyricHelper : NSObject
{
}

+ (id)safeSubstring:(id)arg1 withRange:(struct _NSRange)arg2;
+ (id)safeSubstring:(id)arg1 fromIndex:(unsigned long long)arg2;
+ (id)safeSubstring:(id)arg1 toIndex:(unsigned long long)arg2;
+ (id)safeCastObject:(id)arg1 toClass:(Class)arg2;
+ (id)getObjectInArray:(id)arg1 byIndex:(unsigned long long)arg2 ofClassType:(Class)arg3 defaultValue:(id)arg4;
+ (_Bool)isIndexInRange:(id)arg1 index:(long long)arg2;
+ (long long)calEndLineNum:(id)arg1 fromTime:(long long)arg2;
+ (long long)calStartLineNum:(id)arg1 fromTime:(long long)arg2;

@end

