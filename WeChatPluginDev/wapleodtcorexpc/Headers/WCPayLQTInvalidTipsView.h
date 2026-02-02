//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIImageView;
@protocol WCPayLQTInvalidTipsViewDelegate;

@interface WCPayLQTInvalidTipsView : UIView
{
    UIImageView *_invalidIconView;
    RichTextView *_richTextView;
    NSString *_richTextContent;
    id <WCPayLQTInvalidTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTInvalidTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *richTextContent; // @synthesize richTextContent=_richTextContent;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIImageView *invalidIconView; // @synthesize invalidIconView=_invalidIconView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateView;
- (void)setContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

