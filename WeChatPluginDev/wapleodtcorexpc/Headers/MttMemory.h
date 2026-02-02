//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MttMemory
{
    int _memorySize;
    NSMutableArray *_values;
}

+ (id)fromJSONString:(id)arg1;
+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) int memorySize; // @synthesize memorySize=_memorySize;
- (void).cxx_destruct;
- (id)JSONString;
- (id)JSONObject;

@end

