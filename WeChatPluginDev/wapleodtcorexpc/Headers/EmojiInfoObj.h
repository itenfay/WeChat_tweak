//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiStatisticsInfo, NSString;

@interface EmojiInfoObj
{
    _Bool _disableExtern;
    NSString *_md5;
    NSString *_url;
    NSString *_thumbUrl;
    NSString *_designerId;
    NSString *_encryptUrl;
    NSString *_aesKey;
    NSString *_productId;
    NSString *_externUrl;
    NSString *_externMd5;
    NSString *_activityId;
    NSString *_attachedText;
    NSString *_attachedTextColor;
    NSString *_lensId;
    NSString *_emojiAttr;
    NSString *_linkId;
    NSString *_storeMeaning;
    EmojiStatisticsInfo *_staticsInfo;
    NSString *_tpUrlString;
    NSString *_authkey;
    struct CGSize _wxamImageSizeToCheck;
}

+ (void)initialize;
+ (void)PBArrayAdd_staticsInfo;
+ (void)PBArrayAdd_emojiAttr;
+ (void)PBArrayAdd_storeMeaning;
+ (void)PBArrayAdd_linkId;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_activityId;
+ (void)PBArrayAdd_externMd5;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_externUrl;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_encryptUrl;
+ (void)PBArrayAdd_designerId;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_md5;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize wxamImageSizeToCheck; // @synthesize wxamImageSizeToCheck=_wxamImageSizeToCheck;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(retain, nonatomic) NSString *tpUrlString; // @synthesize tpUrlString=_tpUrlString;
@property(nonatomic) _Bool disableExtern; // @synthesize disableExtern=_disableExtern;
@property(retain, nonatomic) EmojiStatisticsInfo *staticsInfo; // @synthesize staticsInfo=_staticsInfo;
@property(retain, nonatomic) NSString *storeMeaning; // @synthesize storeMeaning=_storeMeaning;
@property(retain, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(retain, nonatomic) NSString *emojiAttr; // @synthesize emojiAttr=_emojiAttr;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(retain, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor=_attachedTextColor;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText=_attachedText;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *externMd5; // @synthesize externMd5=_externMd5;
@property(retain, nonatomic) NSString *externUrl; // @synthesize externUrl=_externUrl;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (_Bool)hasTpDownloadInfo;
- (_Bool)canCdnDownload;
- (_Bool)hasEncryptDownloadInfo;
- (_Bool)hasWxAMDownloadInfo;
- (_Bool)isStoreEmoticon;
@property(readonly, copy) NSString *description;
- (void)copyDownloadInfoFromMsg:(id)arg1;
- (id)initWithEmojiInfo:(id)arg1;
- (id)emojiInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

