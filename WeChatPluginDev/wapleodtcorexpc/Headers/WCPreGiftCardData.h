//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPreGiftCardData
{
    _Bool _ignore;
    unsigned int _bizUin;
    NSString *_fromUserName;
    NSString *_fromUserHeadImgUrl;
    long long _status;
    NSString *_content;
    NSString *_buttonWording;
    NSString *_backgroundColor;
    NSString *_packageUrl;
    NSString *_buttonColor;
    NSString *_outOfCardWording;
    NSString *_seeOtherWording;
    NSString *_orderId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(retain, nonatomic) NSString *seeOtherWording; // @synthesize seeOtherWording=_seeOtherWording;
@property(retain, nonatomic) NSString *outOfCardWording; // @synthesize outOfCardWording=_outOfCardWording;
@property(retain, nonatomic) NSString *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) NSString *packageUrl; // @synthesize packageUrl=_packageUrl;
@property(nonatomic) _Bool ignore; // @synthesize ignore=_ignore;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *fromUserHeadImgUrl; // @synthesize fromUserHeadImgUrl=_fromUserHeadImgUrl;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;

@end

