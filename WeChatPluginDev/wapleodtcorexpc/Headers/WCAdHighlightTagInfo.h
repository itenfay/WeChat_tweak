//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdColorInfo;

@interface WCAdHighlightTagInfo : NSObject
{
    WCAdColorInfo *_titleColor;
    WCAdColorInfo *_numberTitleColor;
    NSString *_title;
    NSString *_numberRequestId;
    NSString *_numberDefaultTitle;
    NSString *_numberDesc;
    NSString *_numberCurrentTitle;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *numberCurrentTitle; // @synthesize numberCurrentTitle=_numberCurrentTitle;
@property(copy, nonatomic) NSString *numberDesc; // @synthesize numberDesc=_numberDesc;
@property(copy, nonatomic) NSString *numberDefaultTitle; // @synthesize numberDefaultTitle=_numberDefaultTitle;
@property(copy, nonatomic) NSString *numberRequestId; // @synthesize numberRequestId=_numberRequestId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WCAdColorInfo *numberTitleColor; // @synthesize numberTitleColor=_numberTitleColor;
@property(retain, nonatomic) WCAdColorInfo *titleColor; // @synthesize titleColor=_titleColor;
- (id)fetchNumberTitleColor;
- (id)fetchTitleColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

