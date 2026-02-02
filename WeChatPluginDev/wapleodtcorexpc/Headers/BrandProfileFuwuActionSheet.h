//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileFuwuContainerView, NSString, UIView;
@protocol BrandProfileFuwuActionSheetDelegate;

@interface BrandProfileFuwuActionSheet
{
    id <BrandProfileFuwuActionSheetDelegate> _delegate;
    UIView *_transparentView;
    BrandProfileFuwuContainerView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileFuwuContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(nonatomic) __weak id <BrandProfileFuwuActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)onMainWindowFrameChanged;
- (void)onTappedCancel;
- (void)onTappedFuwuInfo:(id)arg1;
- (void)setFuwuInfoList:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)setupContainerView;
- (void)initPageSheetConfig;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

