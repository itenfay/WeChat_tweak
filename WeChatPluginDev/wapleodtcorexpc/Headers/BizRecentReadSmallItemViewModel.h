//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BizRecentReadSmallItemViewModel
{
    unsigned int _appMsgId;
    unsigned int _itemId;
    long long _type;
    NSString *_nickname;
    NSString *_coverUrl;
    NSString *_contentUrl;
    NSString *_bizUin;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned int appMsgId; // @synthesize appMsgId=_appMsgId;
@property(retain, nonatomic) NSString *bizUin; // @synthesize bizUin=_bizUin;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)identifier;
- (void)updateViewModel:(id)arg1;

@end

