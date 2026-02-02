//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView;
@protocol WCFinderFittingWidthRichViewDelegate;

@interface WCFinderFittingWidthRichView : UIView
{
    _Bool _expandOnce;
    _Bool _currentExpanded;
    id <WCFinderFittingWidthRichViewDelegate> _delegate;
    RichTextView *_textView;
    long long _lineNumber;
    long long _expandLimitNumber;
    NSString *_content;
    CDUnknownBlockType _onClickUrl;
    long long _contentLineNumber;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool currentExpanded; // @synthesize currentExpanded=_currentExpanded;
@property(nonatomic) long long contentLineNumber; // @synthesize contentLineNumber=_contentLineNumber;
@property(copy, nonatomic) CDUnknownBlockType onClickUrl; // @synthesize onClickUrl=_onClickUrl;
@property(nonatomic) _Bool expandOnce; // @synthesize expandOnce=_expandOnce;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long expandLimitNumber; // @synthesize expandLimitNumber=_expandLimitNumber;
@property(nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderFittingWidthRichViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canBecomeFirstResponder;
- (void)onCopy:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (long long)lineNumberCountForStyleArr:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)generateDisplayedIntroductionContent;
- (long long)displayLineNumber;
- (void)configExpandable;
@property(nonatomic) _Bool expanded;
@property(readonly, nonatomic) _Bool displayExpand;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

