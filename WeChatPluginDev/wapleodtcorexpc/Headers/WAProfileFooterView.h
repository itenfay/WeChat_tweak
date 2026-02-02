//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIView, NSString, RichTextView, UIButton, WAContact;

@interface WAProfileFooterView : UIView
{
    _Bool _needBottomFeedbackButton;
    WAContact *_contact;
    CDUnknownBlockType _eventAction;
    UIView *_footerViewBackground;
    UIView *_footerViewContainer;
    RichTextView *_aboutOriginalView;
    RichTextView *_teenagerProtectView;
    MMUIView *_buttonSplitView;
    UIButton *_bottomFeedBackButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bottomFeedBackButton; // @synthesize bottomFeedBackButton=_bottomFeedBackButton;
@property(retain, nonatomic) MMUIView *buttonSplitView; // @synthesize buttonSplitView=_buttonSplitView;
@property(retain, nonatomic) RichTextView *teenagerProtectView; // @synthesize teenagerProtectView=_teenagerProtectView;
@property(retain, nonatomic) RichTextView *aboutOriginalView; // @synthesize aboutOriginalView=_aboutOriginalView;
@property(retain, nonatomic) UIView *footerViewContainer; // @synthesize footerViewContainer=_footerViewContainer;
@property(retain, nonatomic) UIView *footerViewBackground; // @synthesize footerViewBackground=_footerViewBackground;
@property(copy, nonatomic) CDUnknownBlockType eventAction; // @synthesize eventAction=_eventAction;
@property(nonatomic) _Bool needBottomFeedbackButton; // @synthesize needBottomFeedbackButton=_needBottomFeedbackButton;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)layoutSubviews;
- (void)onBottomFeedBack;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

