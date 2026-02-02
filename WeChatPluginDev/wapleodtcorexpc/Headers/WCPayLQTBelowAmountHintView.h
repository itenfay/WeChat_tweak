//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;
@protocol WCPayLQTBelowAmountHintViewDelegate;

@interface WCPayLQTBelowAmountHintView : UIView
{
    NSMutableArray *_hintBelowAmount;
    id <WCPayLQTBelowAmountHintViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTBelowAmountHintViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *hintBelowAmount; // @synthesize hintBelowAmount=_hintBelowAmount;
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

