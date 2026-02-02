//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MttMemoryBasicValue
{
    _Bool _flag;
    int _pos;
    int _size;
    long long _value;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int pos; // @synthesize pos=_pos;
- (id)JSONObject;

@end

