//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTDelete
{
    struct StatementDelete _statement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)execute;
- (id)offset:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)where:(const void *)arg1;
- (id)fromTable:(id)arg1;
- (void *)statement;
- (id)initWithHandle:(id)arg1;

@end

