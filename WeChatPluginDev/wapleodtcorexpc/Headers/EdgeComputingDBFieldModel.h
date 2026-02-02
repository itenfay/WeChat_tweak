//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EdgeComputingDBFieldModel
{
    unsigned int _index;
    NSString *_name;
    NSString *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

