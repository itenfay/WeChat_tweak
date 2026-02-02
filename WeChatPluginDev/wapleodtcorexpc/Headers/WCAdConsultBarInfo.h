//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo, WCAdColorInfo;

@interface WCAdConsultBarInfo : NSObject
{
    NSString *_title;
    WCAdColorInfo *_titleColor;
    NSString *_consultText;
    WCAdColorInfo *_consultTextColor;
    NSString *_iconDark;
    NSString *_iconLight;
    WCAdCardBtnInfo *_titleJumpActionInfo;
    WCAdCardBtnInfo *_consultButtonJumpActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *consultButtonJumpActionInfo; // @synthesize consultButtonJumpActionInfo=_consultButtonJumpActionInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *titleJumpActionInfo; // @synthesize titleJumpActionInfo=_titleJumpActionInfo;
@property(copy, nonatomic) NSString *iconLight; // @synthesize iconLight=_iconLight;
@property(copy, nonatomic) NSString *iconDark; // @synthesize iconDark=_iconDark;
@property(retain, nonatomic) WCAdColorInfo *consultTextColor; // @synthesize consultTextColor=_consultTextColor;
@property(copy, nonatomic) NSString *consultText; // @synthesize consultText=_consultText;
@property(retain, nonatomic) WCAdColorInfo *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)fetchConsultTextColor;
- (id)fetchTitleColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

