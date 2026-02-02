//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDynamicColor, MMVoidCallback, NSString;

@interface KindaLink : NSObject
{
    int _linkBkgRadius;
    NSString *_m_text;
    MMVoidCallback *_m_linkCallback;
    MMDynamicColor *_m_linkColor;
    long long _m_linkStyle;
    NSString *_fontName;
    MMDynamicColor *_linkBkgColor;
    double _linkTextSize;
    long long _fontStyle;
    struct _NSRange _m_range;
}

- (void).cxx_destruct;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) double linkTextSize; // @synthesize linkTextSize=_linkTextSize;
@property(nonatomic) int linkBkgRadius; // @synthesize linkBkgRadius=_linkBkgRadius;
@property(retain, nonatomic) MMDynamicColor *linkBkgColor; // @synthesize linkBkgColor=_linkBkgColor;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) long long m_linkStyle; // @synthesize m_linkStyle=_m_linkStyle;
@property(retain, nonatomic) MMDynamicColor *m_linkColor; // @synthesize m_linkColor=_m_linkColor;
@property(retain, nonatomic) MMVoidCallback *m_linkCallback; // @synthesize m_linkCallback=_m_linkCallback;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text=_m_text;
@property(nonatomic) struct _NSRange m_range; // @synthesize m_range=_m_range;
- (long long)getFontStyle;
- (float)getLinkTextSize;
- (void)setTextSize:(float)arg1;
- (int)getLinkBkgRadius;
- (id)getLinkBkgColor;
- (void)setBackground:(id)arg1 radius:(int)arg2;
- (id)getLinkFont;
- (long long)getLinkStyle;
- (id)getLinkCallbackImpl;
- (id)getLinkColor;
- (id)getText;
- (void)setLinkFont:(id)arg1;
- (void)setLinkStyle:(long long)arg1;
- (void)setLinkCallbackImpl:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

