//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ComonPromptInfo, MMUILabel, NSString, RichTextView;
@protocol WCPayLQTPromptTipsViewDelegate;

@interface WCPayLQTPromptTipsView : UIView
{
    id <WCPayLQTPromptTipsViewDelegate> _delegate;
    ComonPromptInfo *_infoData;
    MMUILabel *_titleLabel;
    RichTextView *_descTextView;
    NSString *_accessibilityContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibilityContent; // @synthesize accessibilityContent=_accessibilityContent;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ComonPromptInfo *infoData; // @synthesize infoData=_infoData;
@property(nonatomic) __weak id <WCPayLQTPromptTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getTipsViewAccessibilityLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupContentWithTitle:(id)arg1 desc:(id)arg2 promptInfo:(id)arg3;
- (id)initTipsViewWithDelegate:(id)arg1 containerWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

