//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveNewCustomGiftText
{
    _Bool _supportCustomText;
    _Bool _specificCustomText;
    unsigned int _textLenLimit;
    double _price;
    NSString *_customText;
    NSString *_antispamCustomText;
    NSString *_key;
    NSString *_currDisplayText;
    NSString *_name;
    CDUnknownBlockType _currDisplayTextChangeCallback;
}

+ (_Bool)isGiftTextPBValid:(id)arg1 business:(id)arg2;
+ (id)transferFromGiftTextPB:(id)arg1 business:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType currDisplayTextChangeCallback; // @synthesize currDisplayTextChangeCallback=_currDisplayTextChangeCallback;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *currDisplayText; // @synthesize currDisplayText=_currDisplayText;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *antispamCustomText; // @synthesize antispamCustomText=_antispamCustomText;
@property(nonatomic) _Bool specificCustomText; // @synthesize specificCustomText=_specificCustomText;
@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) unsigned int textLenLimit; // @synthesize textLenLimit=_textLenLimit;
@property(nonatomic) _Bool supportCustomText; // @synthesize supportCustomText=_supportCustomText;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)recoverCurrentDisplayTextFromCustomizationConfig;
- (_Bool)synchronizeCurrentDisplayTextToCustomizationConfig;
- (_Bool)isCurrentDisplayTextEqualToCustomizationConfig;
- (_Bool)updateDisplayText:(id)arg1;
- (id)styleName;

@end

