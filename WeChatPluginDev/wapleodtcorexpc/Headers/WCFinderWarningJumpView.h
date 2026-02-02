//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, NSString, RichTextView, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderJumpInfoIconView;
@protocol WCFinderWarningJumpViewDelegate;

@interface WCFinderWarningJumpView : UIView
{
    int _showPosition;
    id <WCFinderWarningJumpViewDelegate> _delegate;
    WCFinderJumpInfoIconView *_iconView;
    RichTextView *_textView;
    FinderJumpInfo_Style *_style;
    WCFinderJumpInfo *_jumpInfo;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderJumpInfoIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderWarningJumpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)layoutViewByPosition;
- (void)updateUIInfo;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 contentVM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

