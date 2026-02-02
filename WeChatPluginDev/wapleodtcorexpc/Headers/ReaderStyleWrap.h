//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface ReaderStyleWrap : NSObject
{
    UIColor *m_color;
    UIFont *m_font;
    _Bool m_bUnderline;
    struct _NSRange m_range;
    UIColor *_m_wxColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *m_wxColor; // @synthesize m_wxColor=_m_wxColor;
@property(nonatomic) struct _NSRange m_range; // @synthesize m_range;
@property(nonatomic) _Bool m_bUnderline; // @synthesize m_bUnderline;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
- (id)getColor;
- (long long)compare:(id)arg1;

@end

