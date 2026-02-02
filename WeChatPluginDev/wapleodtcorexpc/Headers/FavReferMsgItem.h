//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavReferMsgItem
{
    unsigned int _type;
    long long _svrId;
    NSString *_displayName;
    NSString *_referDesc;
    NSString *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *referDesc; // @synthesize referDesc=_referDesc;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long svrId; // @synthesize svrId=_svrId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toMsgWrap;

@end

