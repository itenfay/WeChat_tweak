//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString;

@interface WCAdInteractionButtonView
{
    MMUIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)updateButtonImageColor;
- (void)setButtonIconWithImage:(id)arg1;
- (void)setButtonIcon;
- (void)onButtonClicked:(id)arg1;
- (void)organizeSubContentViews;
- (void)initializeGesture;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

