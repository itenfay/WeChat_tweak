//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, RichTextView;
@protocol WCLabSettingFooterViewDelegate;

@interface WCLabSettingFooterView : UIView
{
    MMUILabel *_tipLabel;
    RichTextView *_agreementView;
    id <WCLabSettingFooterViewDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLabSettingFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initAgreementView;
- (void)initTipLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

