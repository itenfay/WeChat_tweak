//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameReportOrderItem
{
    int _order;
    id _value;
}

+ (id)itemWithOrder:(unsigned int)arg1 AndValue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) int order; // @synthesize order=_order;

@end

