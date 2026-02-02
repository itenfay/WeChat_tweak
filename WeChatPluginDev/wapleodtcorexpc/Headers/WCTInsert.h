//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCTInsert
{
    struct SyntaxList<WCTProperty> _properties;
    struct StatementInsert _statement;
    NSArray *_values;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)realExecute;
- (_Bool)execute;
- (id)value:(id)arg1;
- (id)values:(id)arg1;
- (id)onProperties:(const void *)arg1;
- (id)intoTable:(id)arg1;
- (id)orIgnore;
- (id)orReplace;
- (void *)statement;
- (id)initWithHandle:(id)arg1;

@end

