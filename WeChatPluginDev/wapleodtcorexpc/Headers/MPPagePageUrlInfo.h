//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPPagePageUrlInfo
{
    _Bool _isPaySubscribe;
    unsigned int _itemShowType;
    unsigned int _scene;
    unsigned int _commentTopicId;
    NSString *_url;
    NSString *_pageIdentifier;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (id)urlInfoIdentifier;

@end

