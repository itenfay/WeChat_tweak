//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavEmoticonItem
{
    _Bool _showRewardTips;
    unsigned int _uiEmoticonType;
    unsigned int _uiGameType;
    unsigned int _uiGameContent;
    unsigned int _uiEmoticonWidth;
    unsigned int _uiEmoticonHeight;
    NSString *_md5;
    NSString *_productId;
    NSString *_cdnUrlString;
    NSString *_encryptUrlString;
    NSString *_aesKey;
    NSString *_externUrl;
    NSString *_externMd5;
    NSString *_designerId;
    NSString *_activityId;
    NSString *_linkId;
    NSString *_thumbImgUrl;
    NSString *_tpUrlString;
    NSString *_authkey;
    NSString *_attachedText;
    NSString *_attachedTextColor;
    NSString *_lensId;
    NSString *_emoticonSvrDescStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emoticonSvrDescStr; // @synthesize emoticonSvrDescStr=_emoticonSvrDescStr;
@property(copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(copy, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor=_attachedTextColor;
@property(copy, nonatomic) NSString *attachedText; // @synthesize attachedText=_attachedText;
@property(copy, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(copy, nonatomic) NSString *tpUrlString; // @synthesize tpUrlString=_tpUrlString;
@property(nonatomic) unsigned int uiEmoticonHeight; // @synthesize uiEmoticonHeight=_uiEmoticonHeight;
@property(nonatomic) unsigned int uiEmoticonWidth; // @synthesize uiEmoticonWidth=_uiEmoticonWidth;
@property(nonatomic) _Bool showRewardTips; // @synthesize showRewardTips=_showRewardTips;
@property(copy, nonatomic) NSString *thumbImgUrl; // @synthesize thumbImgUrl=_thumbImgUrl;
@property(copy, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(copy, nonatomic) NSString *externMd5; // @synthesize externMd5=_externMd5;
@property(copy, nonatomic) NSString *externUrl; // @synthesize externUrl=_externUrl;
@property(copy, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(copy, nonatomic) NSString *encryptUrlString; // @synthesize encryptUrlString=_encryptUrlString;
@property(copy, nonatomic) NSString *cdnUrlString; // @synthesize cdnUrlString=_cdnUrlString;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned int uiGameContent; // @synthesize uiGameContent=_uiGameContent;
@property(nonatomic) unsigned int uiGameType; // @synthesize uiGameType=_uiGameType;
@property(nonatomic) unsigned int uiEmoticonType; // @synthesize uiEmoticonType=_uiEmoticonType;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;

@end

