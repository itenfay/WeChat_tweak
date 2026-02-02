//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCCanvasComponentRedEnvelopSubCardInfo
{
    int _subType;
    unsigned int _expireTime;
    NSString *_headline;
    NSString *_desc;
    NSString *_btnTitle;
    NSString *_btnTitleAfterAction;
    NSString *_btnTitleExpired;
    NSString *_btnTitleGetByOther;
    NSString *_decorationTitle;
    NSMutableDictionary *_subCardsInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseSubCardsFromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *subCardsInfo; // @synthesize subCardsInfo=_subCardsInfo;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *decorationTitle; // @synthesize decorationTitle=_decorationTitle;
@property(retain, nonatomic) NSString *btnTitleGetByOther; // @synthesize btnTitleGetByOther=_btnTitleGetByOther;
@property(retain, nonatomic) NSString *btnTitleExpired; // @synthesize btnTitleExpired=_btnTitleExpired;
@property(retain, nonatomic) NSString *btnTitleAfterAction; // @synthesize btnTitleAfterAction=_btnTitleAfterAction;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

