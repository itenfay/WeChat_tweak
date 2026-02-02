//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView, WCFinderSelectPanelView;
@protocol WCFinderLimitedContentActionSheetDelegate;

@interface WCFinderLimitedContentActionSheet
{
    id <WCFinderLimitedContentActionSheetDelegate> _finderDelegate;
    NSString *_titleContent;
    NSArray *_gridModels;
    UIView *_tipsView;
    WCFinderSelectPanelView *_panelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSelectPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSArray *gridModels; // @synthesize gridModels=_gridModels;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
@property(nonatomic) __weak id <WCFinderLimitedContentActionSheetDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
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

