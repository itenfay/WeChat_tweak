//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface ExpandableTextViewConfig : NSObject
{
    _Bool _expandHotArea;
    _Bool _lineBreakByClipping;
    NSString *_shrinkWording;
    NSString *_expandWording;
    long long _shrinkLineNum;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_content;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lineBreakByClipping; // @synthesize lineBreakByClipping=_lineBreakByClipping;
@property(nonatomic) _Bool expandHotArea; // @synthesize expandHotArea=_expandHotArea;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long shrinkLineNum; // @synthesize shrinkLineNum=_shrinkLineNum;
@property(retain, nonatomic) NSString *expandWording; // @synthesize expandWording=_expandWording;
@property(retain, nonatomic) NSString *shrinkWording; // @synthesize shrinkWording=_shrinkWording;
- (id)init;

@end

