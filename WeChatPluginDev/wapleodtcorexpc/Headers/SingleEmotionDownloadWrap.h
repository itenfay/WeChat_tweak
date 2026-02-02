//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj;

@interface SingleEmotionDownloadWrap
{
    _Bool _isTempFirst;
    _Bool _addToFirst;
    _Bool _isForWebDisplay;
    EmojiInfoObj *_emojiInfoObj;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForWebDisplay; // @synthesize isForWebDisplay=_isForWebDisplay;
@property(nonatomic) _Bool addToFirst; // @synthesize addToFirst=_addToFirst;
@property(nonatomic) _Bool isTempFirst; // @synthesize isTempFirst=_isTempFirst;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

