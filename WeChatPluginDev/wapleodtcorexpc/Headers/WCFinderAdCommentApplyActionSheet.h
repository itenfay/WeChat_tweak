//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIView;
@protocol WCFinderAdCommentApplyActionSheetDelegate;

@interface WCFinderAdCommentApplyActionSheet
{
    int _commentScene;
    id <WCFinderAdCommentApplyActionSheetDelegate> _applyDelegate;
    UIView *_tipsView;
    MMUIButton *_acceptBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <WCFinderAdCommentApplyActionSheetDelegate> applyDelegate; // @synthesize applyDelegate=_applyDelegate;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (void)updateAcceptBtnBkg;
- (void)onCheckBoxClicked:(id)arg1;
- (void)bindAdApplyReportFromView:(id)arg1 viewId:(id)arg2 reportPolicy:(unsigned long long)arg3;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

