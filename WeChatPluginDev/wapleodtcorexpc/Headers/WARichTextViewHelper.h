//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RichTextView, UIColor, UIFont, UIView;
@protocol WARichTextViewHelperDelegate;

@interface WARichTextViewHelper : NSObject
{
    RichTextView *_internalView;
    NSString *_content;
    id <WARichTextViewHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WARichTextViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setTruncatedTrailingContent:(id)arg1;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText;
@property(nonatomic) _Bool lineBreakByClipping;
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
- (id)getContent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

