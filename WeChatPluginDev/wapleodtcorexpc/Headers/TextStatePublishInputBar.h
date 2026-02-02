//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString;
@protocol WCCommonInputViewDelegate;

@interface TextStatePublishInputBar : UIView
{
    id <WCCommonInputViewDelegate> _delegate;
    MMUIButton *_switchButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(nonatomic) __weak id <WCCommonInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapSwitchButton:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

