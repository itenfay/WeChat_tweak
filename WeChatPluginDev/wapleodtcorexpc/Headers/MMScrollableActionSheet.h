//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetContainerView, NSString, UIView;
@protocol MMScrollableActionSheetDelegate;

@interface MMScrollableActionSheet
{
    id <MMScrollableActionSheetDelegate> _delegate;
    MMScrollableActionSheetContainerView *_containerView;
    UIView *_transparentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) MMScrollableActionSheetContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMScrollableActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMainWindowFrameChanged;
- (void)onTappedCancel;
- (void)onTappedItemInfo:(id)arg1;
- (void)onTappedTransparent;
- (void)layoutSubviews;
- (void)appendRow1HorizontalItemWithItemType:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3;
- (void)appendRow0HorizontalItemWithItemType:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showInTopMostView;
- (void)showInView:(id)arg1;
- (void)setupTransparentView;
- (void)setupContainerView;
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

