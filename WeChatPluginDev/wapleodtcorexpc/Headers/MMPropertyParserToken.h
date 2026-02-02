//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMPropertyParserToken
{
    int _attributes;
    NSString *_name;
    NSString *_type;
    NSString *_getter;
    NSString *_setter;
}

- (void).cxx_destruct;
@property(nonatomic) int attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *setter; // @synthesize setter=_setter;
@property(retain, nonatomic) NSString *getter; // @synthesize getter=_getter;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)init;

@end

