//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MJKVO)
- (id)mj_replacementOldValues;
- (id)mj_replacementNewValues;
- (id)mj_removedValues;
- (id)mj_insertedValues;
- (unsigned long long)mj_uintValueAfterChange;
- (unsigned long long)mj_uintValueBeforeChange;
- (double)mj_doubleValueAfterChange;
- (double)mj_doubleValueBeforeChange;
- (float)mj_floatValueAfterChange;
- (float)mj_floatValueBeforeChange;
- (_Bool)mj_boolValueAfterChange;
- (_Bool)mj_boolValueBeforeChange;
- (id)mj_changedIndexes;
- (id)mj_valueAfterChange;
- (id)mj_valueBeforeChange;
- (unsigned long long)mj_changeKind;
@end

