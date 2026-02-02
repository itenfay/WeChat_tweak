//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTSelectable
{
    struct StatementSelect _statement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)offset:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)where:(const void *)arg1;
- (void)willPrepare:(void *)arg1;
- (_Bool)lazyPrepare;
- (void *)statement;
- (id)initWithHandle:(id)arg1;

@end

