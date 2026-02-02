//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSNumber.h>

@interface NSNumber (WWKApiSafeCast)
+ (id)wwkapi_nilobj;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)qb_numberWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setDouble:(double)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (double)qb_doubleValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setFloat:(float)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (float)qb_floatValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setLonglong:(long long)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (long long)qb_longlongValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setInt:(int)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (int)qb_intValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setShort:(short)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (short)qb_shortValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setChar:(BOOL)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (BOOL)qb_charValueWithName:(id)arg1 inAttributes:(id)arg2;
+ (void)qb_setBool:(_Bool)arg1 InAttributes:(id)arg2 withName:(id)arg3;
+ (_Bool)qb_boolValueWithName:(id)arg1 inAttributes:(id)arg2;
- (id)archivedWCTValue;
- (id)numberValue;
- (id)dataValue;
- (double)px;
- (double)pt;
- (double)sA;
- (double)A;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2;
@end

