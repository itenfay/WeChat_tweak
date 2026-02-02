//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WAShareAppMessageCommonParamsModel : NSObject
{
    _Bool _disableForward;
    _Bool _useDefaultSnapshot;
    _Bool _hasRelievedBuyPlugin;
    _Bool _useForChatTool;
    _Bool _sdk_isFromMenu;
    unsigned int _cardSubType;
    int _appBrandPriority;
    NSString *_title;
    NSString *_desc;
    NSString *_path;
    NSString *_imageUrl;
    NSString *_cacheKey;
    NSDictionary *_messageExtraData;
    NSString *_webpageUrl;
    NSString *_to;
    NSString *_signature;
    NSString *_thumbDataHash;
    NSString *_videoPath;
    NSString *_videoThumbPath;
    NSString *_videoMD5;
    NSString *_videoButtonText;
    NSString *_playDesc;
    NSString *_type;
    NSString *_link;
    long long _bizType;
    NSString *_defaultHintUrl;
    NSString *_tailLang;
    NSString *_bizSourceName;
    NSString *_bizSourceIconUrl;
    NSString *_chatroomUsername;
    NSString *_webViewUrl;
    NSString *_mode;
    NSDictionary *_WAShareAppMessageCommonParamsModel_OriginDictionary;
}

+ (id)fromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *WAShareAppMessageCommonParamsModel_OriginDictionary; // @synthesize WAShareAppMessageCommonParamsModel_OriginDictionary=_WAShareAppMessageCommonParamsModel_OriginDictionary;
@property(nonatomic) _Bool sdk_isFromMenu; // @synthesize sdk_isFromMenu=_sdk_isFromMenu;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(nonatomic) _Bool useForChatTool; // @synthesize useForChatTool=_useForChatTool;
@property(copy, nonatomic) NSString *chatroomUsername; // @synthesize chatroomUsername=_chatroomUsername;
@property(copy, nonatomic) NSString *bizSourceIconUrl; // @synthesize bizSourceIconUrl=_bizSourceIconUrl;
@property(copy, nonatomic) NSString *bizSourceName; // @synthesize bizSourceName=_bizSourceName;
@property(nonatomic) int appBrandPriority; // @synthesize appBrandPriority=_appBrandPriority;
@property(copy, nonatomic) NSString *tailLang; // @synthesize tailLang=_tailLang;
@property(copy, nonatomic) NSString *defaultHintUrl; // @synthesize defaultHintUrl=_defaultHintUrl;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool hasRelievedBuyPlugin; // @synthesize hasRelievedBuyPlugin=_hasRelievedBuyPlugin;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *playDesc; // @synthesize playDesc=_playDesc;
@property(copy, nonatomic) NSString *videoButtonText; // @synthesize videoButtonText=_videoButtonText;
@property(copy, nonatomic) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
@property(copy, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) unsigned int cardSubType; // @synthesize cardSubType=_cardSubType;
@property(copy, nonatomic) NSString *thumbDataHash; // @synthesize thumbDataHash=_thumbDataHash;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl=_webpageUrl;
@property(nonatomic) _Bool useDefaultSnapshot; // @synthesize useDefaultSnapshot=_useDefaultSnapshot;
@property(copy, nonatomic) NSDictionary *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)needSignature;
- (id)toShareAppMessageContextModelWithWAContact:(id)arg1 cardType:(int)arg2 shouldUseUpdatableShare:(_Bool)arg3 updatableShareTemplateId:(id)arg4 isTodoMessage:(_Bool)arg5 toDoActivityId:(id)arg6 isPrivateMessage:(_Bool)arg7 secFlagForSinglePageMode:(unsigned int)arg8;
- (id)description;

@end

