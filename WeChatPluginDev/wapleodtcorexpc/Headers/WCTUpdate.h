//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;

@interface WCTUpdate
{
    struct StatementUpdate _statement;
    struct SyntaxList<WCTProperty> _properties;
    unsigned long long _type;
    NSObject *_value;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)execute;
- (id)toRow:(id)arg1;
- (id)toValue:(id)arg1;
- (id)toObject:(id)arg1;
- (id)offset:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)where:(const void *)arg1;
- (id)set:(const void *)arg1;
- (id)table:(id)arg1;
- (void *)statement;
- (id)initWithHandle:(id)arg1;

@end

