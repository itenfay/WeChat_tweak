//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MttMemory;

@interface MttMemoryObjValue
{
    int _tag;
    int _pos;
    MttMemory *_obj;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) MttMemory *obj; // @synthesize obj=_obj;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)JSONObject;

@end

