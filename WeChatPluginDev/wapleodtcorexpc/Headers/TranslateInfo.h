//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface TranslateInfo
{
    unsigned int mesLocalId;
    unsigned long long msgServerId;
    unsigned long long msgCreateTime;
    NSString *recoreItemlocalDataID;
    NSString *originText;
    NSString *originLang;
    NSString *translatedText;
    NSString *translatedLang;
    _Bool showOriginTextNow;
    int translateStatus;
    NSString *brandWording;
    NSString *snsID;
    _Bool bNeedShowAnimation;
    NSString *displayTranslatedText;
    _Bool canReTrans;
    _Bool _bAutoScrollUp;
    int _autoScrollUpCount;
    NSData *cookie;
}

+ (void)initialize;
+ (void)PBArrayAdd_recoreItemlocalDataID;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_canReTrans;
+ (void)PBArrayAdd_cookie;
+ (void)PBArrayAdd_bNeedShowAnimation;
+ (void)PBArrayAdd_snsID;
+ (void)PBArrayAdd_brandWording;
+ (void)PBArrayAdd_translateStatus;
+ (void)PBArrayAdd_showOriginTextNow;
+ (void)PBArrayAdd_translatedLang;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_originLang;
+ (void)PBArrayAdd_originText;
+ (void)PBArrayAdd_mesLocalId;
- (void).cxx_destruct;
@property(nonatomic) int autoScrollUpCount; // @synthesize autoScrollUpCount=_autoScrollUpCount;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(retain, nonatomic) NSString *recoreItemlocalDataID; // @synthesize recoreItemlocalDataID;
@property(nonatomic) unsigned long long msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) unsigned long long msgServerId; // @synthesize msgServerId;
@property(nonatomic) _Bool canReTrans; // @synthesize canReTrans;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie;
@property(nonatomic) _Bool bNeedShowAnimation; // @synthesize bNeedShowAnimation;
@property(retain, nonatomic) NSString *snsID; // @synthesize snsID;
@property(retain, nonatomic) NSString *brandWording; // @synthesize brandWording;
@property(nonatomic) int translateStatus; // @synthesize translateStatus;
@property(nonatomic) _Bool showOriginTextNow; // @synthesize showOriginTextNow;
@property(retain, nonatomic) NSString *translatedLang; // @synthesize translatedLang;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originLang; // @synthesize originLang;
@property(retain, nonatomic) NSString *originText; // @synthesize originText;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
@property(retain, nonatomic) NSString *displayTranslatedText; // @synthesize displayTranslatedText;
- (void)setIdentifierParamsWithRecordItemData:(id)arg1;
- (void)setIdentifierParamsWithMsg:(id)arg1;
- (_Bool)isMatchWithMsg:(id)arg1;
- (int)GetTranslateStatus;
- (_Bool)isTranslateFailed;
- (_Bool)isTextTooLong;
- (_Bool)isTranslating;
- (id)getDisplayContent;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

