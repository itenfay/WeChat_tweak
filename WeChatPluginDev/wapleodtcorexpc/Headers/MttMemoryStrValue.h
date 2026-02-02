//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MttMemoryStrValue
{
    int _pos;
    int _size;
    NSString *_value;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int pos; // @synthesize pos=_pos;
- (void).cxx_destruct;
- (id)JSONObject;

@end

