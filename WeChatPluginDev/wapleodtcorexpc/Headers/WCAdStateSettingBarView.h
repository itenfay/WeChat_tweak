//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, WCAdStateSettingBarInfo, WCAdURLImageView, WCDataItem;
@protocol WCAdStateSettingBarViewDelegate;

@interface WCAdStateSettingBarView
{
    WCDataItem *_dataItem;
    WCAdStateSettingBarInfo *_barInfo;
    unsigned long long _contentItemScene;
    MMUILabel *_likeNumberTitle;
    MMUIButton *_jumpLinkButton;
    MMUILabel *_descLabel;
    WCAdURLImageView *_jumpLinkIcon;
    unsigned long long _barStyle;
    id <WCAdStateSettingBarViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdStateSettingBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) WCAdURLImageView *jumpLinkIcon; // @synthesize jumpLinkIcon=_jumpLinkIcon;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUIButton *jumpLinkButton; // @synthesize jumpLinkButton=_jumpLinkButton;
@property(retain, nonatomic) MMUILabel *likeNumberTitle; // @synthesize likeNumberTitle=_likeNumberTitle;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCAdStateSettingBarInfo *barInfo; // @synthesize barInfo=_barInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)barLogic;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)resetJumpLinkButtonState;
- (void)onJumpLinkButtonTouchUp:(id)arg1;
- (void)onJumpLinkButtonTouchDown:(id)arg1;
- (void)onJumpLinkButtonClick:(id)arg1;
- (void)updateStateSettingBarStyleWithAnimation;
- (unsigned long long)fetchBarStyle;
- (void)updateDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)cleanSubViews;
- (void)showViewWithStyle:(unsigned long long)arg1;
- (void)initSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

