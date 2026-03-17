//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIFont, UIView;
@protocol WARichTextViewHelperDelegate;

@protocol IWARichTextViewHelper <NSObject>
@property(nonatomic) _Bool lineBreakByClipping;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText;
@property(retain, nonatomic) UIColor *linkColor;
@property(nonatomic) _Bool bHandleTextClick;
@property(nonatomic) long long textAlignment;
@property(nonatomic) double lineNumber;
@property(nonatomic) double lineSpacing;
@property(nonatomic) double maxWidth;
@property(nonatomic) unsigned long long parserType;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *textFont;
@property(nonatomic) _Bool shouldHandleLongPress;
@property(nonatomic) _Bool isTouchesPassOn;
@property(readonly, nonatomic) UIView *internalView;
- (void)setTruncatedTrailingContent:(NSString *)arg1;
- (double)getHeightForContent:(NSString *)arg1 font:(UIFont *)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
- (void)setDelegate:(id <WARichTextViewHelperDelegate>)arg1;
- (NSString *)getContent;
- (void)setContent:(NSString *)arg1;
@end

