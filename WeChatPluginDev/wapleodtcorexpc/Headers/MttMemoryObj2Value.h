//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MttMemory;

@interface MttMemoryObj2Value
{
    int _parent;
    int _offset;
    int _pos;
    MttMemory *_obj;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) MttMemory *obj; // @synthesize obj=_obj;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) int parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)JSONObject;

@end

