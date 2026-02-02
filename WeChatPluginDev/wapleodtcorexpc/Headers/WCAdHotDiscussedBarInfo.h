//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAdCardBtnInfo, WCAdColorInfo;

@interface WCAdHotDiscussedBarInfo : NSObject
{
    NSString *_labelText;
    WCAdColorInfo *_labelTextColor;
    NSString *_title;
    WCAdColorInfo *_titleColor;
    NSString *_numberDefaultTitle;
    NSString *_numberRequestParams;
    NSString *_numberCurrentTitle;
    WCAdColorInfo *_numberTitleColor;
    NSArray *_headImageList;
    WCAdCardBtnInfo *_jumpLinkActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *jumpLinkActionInfo; // @synthesize jumpLinkActionInfo=_jumpLinkActionInfo;
@property(retain, nonatomic) NSArray *headImageList; // @synthesize headImageList=_headImageList;
@property(retain, nonatomic) WCAdColorInfo *numberTitleColor; // @synthesize numberTitleColor=_numberTitleColor;
@property(copy, nonatomic) NSString *numberCurrentTitle; // @synthesize numberCurrentTitle=_numberCurrentTitle;
@property(copy, nonatomic) NSString *numberRequestParams; // @synthesize numberRequestParams=_numberRequestParams;
@property(copy, nonatomic) NSString *numberDefaultTitle; // @synthesize numberDefaultTitle=_numberDefaultTitle;
@property(retain, nonatomic) WCAdColorInfo *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WCAdColorInfo *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (id)fetchNumberTitleColor;
- (id)fetchTitleColor;
- (id)fetchLabelTextColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

