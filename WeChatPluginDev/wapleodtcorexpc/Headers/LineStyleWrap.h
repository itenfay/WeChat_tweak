//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface LineStyleWrap : NSObject
{
    NSString *m_nsChars;
    UIColor *m_color;
    UIFont *m_font;
    double m_fOffset;
    _Bool m_bUnderline;
    double m_fRealLength;
    _Bool m_hide;
    NSString *_m_nsStrikeThroughWording;
    UIColor *_m_strikeThroughWordingColor;
    UIColor *_m_wxColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *m_wxColor; // @synthesize m_wxColor=_m_wxColor;
@property(retain, nonatomic) UIColor *m_strikeThroughWordingColor; // @synthesize m_strikeThroughWordingColor=_m_strikeThroughWordingColor;
@property(retain, nonatomic) NSString *m_nsStrikeThroughWording; // @synthesize m_nsStrikeThroughWording=_m_nsStrikeThroughWording;
@property(nonatomic) _Bool m_hide; // @synthesize m_hide;
@property(nonatomic) double m_fRealLength; // @synthesize m_fRealLength;
@property(nonatomic) _Bool m_bUnderline; // @synthesize m_bUnderline;
@property(nonatomic) double m_fOffset; // @synthesize m_fOffset;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
@property(retain, nonatomic) NSString *m_nsChars; // @synthesize m_nsChars;
- (id)getColor;
- (long long)compare:(id)arg1;

@end

