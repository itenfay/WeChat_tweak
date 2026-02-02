//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdColorInfo, WCAdPagInfo;

@interface WCAdInteractionTagInfo : NSObject
{
    NSString *_normalIconImage;
    NSString *_normalIconImageDark;
    NSString *_normalTitle;
    WCAdColorInfo *_normalTitleColor;
    WCAdPagInfo *_activeIconPag;
    NSString *_activeTitle;
    WCAdColorInfo *_activeTitleColor;
    NSString *_desc;
    WCAdColorInfo *_descColor;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdColorInfo *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WCAdColorInfo *activeTitleColor; // @synthesize activeTitleColor=_activeTitleColor;
@property(retain, nonatomic) NSString *activeTitle; // @synthesize activeTitle=_activeTitle;
@property(retain, nonatomic) WCAdPagInfo *activeIconPag; // @synthesize activeIconPag=_activeIconPag;
@property(retain, nonatomic) WCAdColorInfo *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) NSString *normalTitle; // @synthesize normalTitle=_normalTitle;
@property(retain, nonatomic) NSString *normalIconImageDark; // @synthesize normalIconImageDark=_normalIconImageDark;
@property(retain, nonatomic) NSString *normalIconImage; // @synthesize normalIconImage=_normalIconImage;
- (id)fetchDescColor;
- (id)fetchActiveTitleColor;
- (id)fetchNormalTitleColor;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

