//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTPreparedStatement : NSObject
{
    void *_handleStatement;
}

- (id)allMultiObjectsOnResultColumns:(const void *)arg1;
- (id)allObjectsOnResultColumns:(const void *)arg1;
- (id)allRows;
- (id)allValuesAtIndex:(int)arg1;
- (id)allValues;
- (void)extractValueAtIndex:(int)arg1 toColumnBindingHolder:(const void *)arg2 ofObject:(id)arg3;
- (void)extractValueAtIndex:(int)arg1 toProperty:(const void *)arg2 ofObject:(id)arg3;
- (id)extractMultiObjectOnResultColumns:(const void *)arg1;
- (id)extractObjectOnResultColumns:(const void *)arg1;
- (id)extractRow;
- (id)extractTableNameAtIndex:(int)arg1;
- (id)extractColumnNameAtIndex:(int)arg1;
- (id)extractOriginColumnNameAtIndex:(int)arg1;
- (int)extractNumberOfColumns;
- (unsigned long long)extractTypeAtIndex:(int)arg1;
- (id)extractValueAtIndex:(int)arg1;
- (id)extractDataAtIndex:(int)arg1;
- (id)extractNumberAtIndex:(int)arg1;
- (id)extractStringAtIndex:(int)arg1;
- (double)extractDoubleAtIndex:(int)arg1;
- (long long)extractIntegerAtIndex:(int)arg1;
- (int)bindParameterIndex:(const void *)arg1;
- (void)bindProperties:(const void *)arg1 ofObject:(id)arg2;
- (void)bindProperty:(const void *)arg1 ofObject:(id)arg2 toIndex:(int)arg3;
- (void)bindValue:(id)arg1 toIndex:(int)arg2;
- (void)bindNumber:(id)arg1 toIndex:(int)arg2;
- (void)bindData:(id)arg1 toIndex:(int)arg2;
- (void)bindString:(id)arg1 toIndex:(int)arg2;
- (void)bindNullToIndex:(int)arg1;
- (void)bindDouble:(const double *)arg1 toIndex:(int)arg2;
- (void)bindInteger:(const long long *)arg1 toIndex:(int)arg2;
- (_Bool)isStatementReadonly;
- (_Bool)done;
- (void)clearBindings;
- (void)reset;
- (_Bool)step;
- (void *)getRawHandleStatement;
- (id)initWithHandleStatement:(void *)arg1;

@end

