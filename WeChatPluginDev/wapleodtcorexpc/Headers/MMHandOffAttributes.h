//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMHandOffAttributes
{
    NSString *_type;
    NSString *_id;
    NSString *_createtime;
    NSString *_from;
    NSString *_to;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *createtime; // @synthesize createtime=_createtime;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

