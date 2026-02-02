//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView;
@protocol MMFinderLiveConnectMicRandomHintTableFooterViewDelegate;

@interface MMFinderLiveConnectMicRandomHintTableFooterView : UIView
{
    _Bool _enableAction;
    id <MMFinderLiveConnectMicRandomHintTableFooterViewDelegate> _delegate;
    RichTextView *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *label; // @synthesize label=_label;
@property(nonatomic) __weak id <MMFinderLiveConnectMicRandomHintTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableAction; // @synthesize enableAction=_enableAction;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

