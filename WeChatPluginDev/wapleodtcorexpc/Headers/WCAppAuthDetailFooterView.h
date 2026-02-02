//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WCAppAuthDetailFooterViewDelegate;

@interface WCAppAuthDetailFooterView : UIView
{
    id <WCAppAuthDetailFooterViewDelegate> _delegate;
    UIButton *_cancelBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak id <WCAppAuthDetailFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCancelBtnClick;
- (void)layoutSubviews;
- (double)btnBottomPadding;
- (double)btnHeight;
- (void)initBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

