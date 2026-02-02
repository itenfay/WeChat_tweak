//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdColorInfo;

@interface WCAdSliderCardProductItem : NSObject
{
    NSString *_iconUrl;
    NSString *_title;
    NSString *_actionBarTitle;
    WCAdColorInfo *_actionBarTitleColor;
    WCAdColorInfo *_highlightColor;
    double _timeInterval;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) WCAdColorInfo *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) WCAdColorInfo *actionBarTitleColor; // @synthesize actionBarTitleColor=_actionBarTitleColor;
@property(retain, nonatomic) NSString *actionBarTitle; // @synthesize actionBarTitle=_actionBarTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)fetchActionBarTitleColor;
- (id)fetchHighlightColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

