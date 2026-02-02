//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCFinderFittingWidthRichView;
@protocol WCFinderProfileShowInWXTipsSheetDelegate;

@interface WCFinderProfileShowInWXTipsSheet
{
    id <WCFinderProfileShowInWXTipsSheetDelegate> _delegate;
    WCFinderFittingWidthRichView *_detailRichTextView;
    UIView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) WCFinderFittingWidthRichView *detailRichTextView; // @synthesize detailRichTextView=_detailRichTextView;
@property(nonatomic) __weak id <WCFinderProfileShowInWXTipsSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)jumpWXProfileHref;
- (void)onClickSettingBtn:(id)arg1;
- (void)onCancelAction;
- (void)onClickCancelBtn:(id)arg1;
- (void)onBackGroundViewTapAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)createBtnWithTitle:(id)arg1 action:(SEL)arg2 bgColor:(id)arg3 titleColor:(id)arg4;
- (void)addShape:(id)arg1;
- (void)viewDidLoad;
- (void)updateYogaLayout;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)showFromViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

