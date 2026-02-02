//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WCFinderMemberShipBlockView : UIView
{
    CDUnknownBlockType _btnClick;
    UIButton *_bkBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bkBtn; // @synthesize bkBtn=_bkBtn;
@property(copy, nonatomic) CDUnknownBlockType btnClick; // @synthesize btnClick=_btnClick;
- (void)OnButtonTapped;
- (void)showBkBtn;
- (id)initWithFrame:(struct CGRect)arg1 vm:(id)arg2;

@end

