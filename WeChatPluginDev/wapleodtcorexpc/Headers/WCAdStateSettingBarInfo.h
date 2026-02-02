//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo, WCAdColorInfo;

@interface WCAdStateSettingBarInfo : NSObject
{
    NSString *_numberDefaultTitle;
    NSString *_numberRequestParams;
    WCAdColorInfo *_numberTitleColor;
    NSString *_numberCurrentTitle;
    NSString *_jumpLinkTitle;
    WCAdColorInfo *_linkTitleColor;
    NSString *_desc;
    WCAdColorInfo *_descColor;
    NSString *_jumpLinkIconLight;
    NSString *_jumpLinkIconDark;
    WCAdCardBtnInfo *_jumpLinkActionInfo;
    long long _stateTriggerType;
    double _stateTriggerTime;
}

+ (id)convertFromFireworkTagInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double stateTriggerTime; // @synthesize stateTriggerTime=_stateTriggerTime;
@property(nonatomic) long long stateTriggerType; // @synthesize stateTriggerType=_stateTriggerType;
@property(retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo; // @synthesize jumpLinkActionInfo=_jumpLinkActionInfo;
@property(copy, nonatomic) NSString *jumpLinkIconDark; // @synthesize jumpLinkIconDark=_jumpLinkIconDark;
@property(copy, nonatomic) NSString *jumpLinkIconLight; // @synthesize jumpLinkIconLight=_jumpLinkIconLight;
@property(retain, nonatomic) WCAdColorInfo *descColor; // @synthesize descColor=_descColor;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WCAdColorInfo *linkTitleColor; // @synthesize linkTitleColor=_linkTitleColor;
@property(copy, nonatomic) NSString *jumpLinkTitle; // @synthesize jumpLinkTitle=_jumpLinkTitle;
@property(copy, nonatomic) NSString *numberCurrentTitle; // @synthesize numberCurrentTitle=_numberCurrentTitle;
@property(retain, nonatomic) WCAdColorInfo *numberTitleColor; // @synthesize numberTitleColor=_numberTitleColor;
@property(copy, nonatomic) NSString *numberRequestParams; // @synthesize numberRequestParams=_numberRequestParams;
@property(copy, nonatomic) NSString *numberDefaultTitle; // @synthesize numberDefaultTitle=_numberDefaultTitle;
- (_Bool)isValid;
- (id)fetchDescColor;
- (id)fetchLinkTitleColor;
- (id)fetchNumberTitleColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

