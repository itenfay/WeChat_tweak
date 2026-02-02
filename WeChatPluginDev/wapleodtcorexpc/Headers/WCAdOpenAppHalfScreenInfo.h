//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdOpenAppHalfScreenInfo : NSObject
{
    _Bool _expandClickArea;
    _Bool _forbidTapBgToClose;
    _Bool _buttonWiderStyle;
    int _style;
    NSString *_appIcon;
    NSString *_appName;
    NSString *_tips1;
    NSString *_tips2;
    NSString *_btnTitle;
    NSString *_appDesc;
    NSArray *_appImageList;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *appImageList; // @synthesize appImageList=_appImageList;
@property(retain, nonatomic) NSString *appDesc; // @synthesize appDesc=_appDesc;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool buttonWiderStyle; // @synthesize buttonWiderStyle=_buttonWiderStyle;
@property(nonatomic) _Bool forbidTapBgToClose; // @synthesize forbidTapBgToClose=_forbidTapBgToClose;
@property(nonatomic) _Bool expandClickArea; // @synthesize expandClickArea=_expandClickArea;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *tips2; // @synthesize tips2=_tips2;
@property(retain, nonatomic) NSString *tips1; // @synthesize tips1=_tips1;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

