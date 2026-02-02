//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface FaceRecogTipsPageSheet
{
    UIView *_tipsContainerView;
    CDUnknownBlockType _onDismiss;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(retain, nonatomic) UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)overrideUserInterfaceStyle;
- (id)genTipsLabelWithTitle:(id)arg1;
- (id)genImageViewWithName:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDismiss:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

