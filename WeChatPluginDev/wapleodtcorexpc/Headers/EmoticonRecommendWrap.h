//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, NSString;

@interface EmoticonRecommendWrap
{
    _Bool _needPurchase;
    _Bool _isFree;
    unsigned int _emojiFrom;
    EmojiInfoObj *_emojiInfo;
    NSString *_emojiDesc;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int emojiFrom; // @synthesize emojiFrom=_emojiFrom;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(nonatomic) _Bool needPurchase; // @synthesize needPurchase=_needPurchase;
@property(retain, nonatomic) NSString *emojiDesc; // @synthesize emojiDesc=_emojiDesc;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

