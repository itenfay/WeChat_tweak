//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdContinuousLikeButtonInfo : NSObject
{
    NSString *_title;
    NSString *_titleColorLight;
    NSString *_titleColorDark;
    NSString *_iconLight;
    NSString *_iconDark;
    NSString *_bgColorLight;
    NSString *_bgColorDark;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bgColorDark; // @synthesize bgColorDark=_bgColorDark;
@property(retain, nonatomic) NSString *bgColorLight; // @synthesize bgColorLight=_bgColorLight;
@property(retain, nonatomic) NSString *iconDark; // @synthesize iconDark=_iconDark;
@property(retain, nonatomic) NSString *iconLight; // @synthesize iconLight=_iconLight;
@property(retain, nonatomic) NSString *titleColorDark; // @synthesize titleColorDark=_titleColorDark;
@property(retain, nonatomic) NSString *titleColorLight; // @synthesize titleColorLight=_titleColorLight;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)fetchBgColor;
- (id)fetchIconUrl;
- (id)fetchTitleColor;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

