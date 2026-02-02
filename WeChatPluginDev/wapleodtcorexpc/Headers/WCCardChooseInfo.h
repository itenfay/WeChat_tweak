//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardChooseInfo
{
    unsigned int _cardType;
    unsigned int _endTime;
    unsigned int _chooseOptional;
    unsigned int _genType;
    NSString *_cardTpId;
    NSString *_color;
    NSString *_logoUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_encryptCode;
    NSString *_shareUserName;
    NSString *_appId;
    NSString *_invoiceTitle;
    NSString *_invoiceItem;
    NSString *_invoiceStatus;
    NSString *_cardId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int genType; // @synthesize genType=_genType;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *invoiceStatus; // @synthesize invoiceStatus=_invoiceStatus;
@property(nonatomic) unsigned int chooseOptional; // @synthesize chooseOptional=_chooseOptional;
@property(retain, nonatomic) NSString *invoiceItem; // @synthesize invoiceItem=_invoiceItem;
@property(retain, nonatomic) NSString *invoiceTitle; // @synthesize invoiceTitle=_invoiceTitle;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName=_shareUserName;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode=_encryptCode;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
- (void)parseFromJSONDic:(id)arg1;

@end

