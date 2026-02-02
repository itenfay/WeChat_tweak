//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameShareNameCard
{
    NSString *_iconUrl;
    NSString *_name;
    NSString *_desc;
    NSString *_tail;
    NSString *_link;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *tail; // @synthesize tail=_tail;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

