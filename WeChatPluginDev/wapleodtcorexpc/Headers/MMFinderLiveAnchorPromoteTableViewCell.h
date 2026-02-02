//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorPromoteInfo, MMUIButton, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveAnchorPromoteTableViewCell
{
    _Bool _alwaysHidePushButton;
    _Bool _enablePushPromote;
    _Bool _isLiving;
    _Bool _editHidePushButton;
    UIView *_contentBackView;
    MMUIButton *_pushButton;
    MMFinderLiveAnchorPromoteInfo *_promoteInfo;
    CDUnknownBlockType _sendPromoteCallback;
    CDUnknownBlockType _cancelPromoteCallback;
    MMUIButton *_cancelPushButton;
    WCFinderAnimationLoadingView *_loadingView;
}

+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *cancelPushButton; // @synthesize cancelPushButton=_cancelPushButton;
@property(nonatomic) _Bool editHidePushButton; // @synthesize editHidePushButton=_editHidePushButton;
@property(copy, nonatomic) CDUnknownBlockType cancelPromoteCallback; // @synthesize cancelPromoteCallback=_cancelPromoteCallback;
@property(copy, nonatomic) CDUnknownBlockType sendPromoteCallback; // @synthesize sendPromoteCallback=_sendPromoteCallback;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
@property(nonatomic) _Bool enablePushPromote; // @synthesize enablePushPromote=_enablePushPromote;
@property(nonatomic) _Bool alwaysHidePushButton; // @synthesize alwaysHidePushButton=_alwaysHidePushButton;
@property(readonly, nonatomic) MMFinderLiveAnchorPromoteInfo *promoteInfo; // @synthesize promoteInfo=_promoteInfo;
@property(retain, nonatomic) MMUIButton *pushButton; // @synthesize pushButton=_pushButton;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
- (void)updatePromoteInfo:(id)arg1;
- (void)onPushPromoteAction;
- (id)getAdaptedColorForPromoteState:(id)arg1;
- (double)rightWidgetLeft;
- (void)updatePushButtonStyle;
- (void)layoutPushButton;
- (void)layoutContentBackView;
- (void)createLoadingView;
- (void)layoutLoadingView;
- (void)layoutUI;
- (void)updateHidePushButtonState:(_Bool)arg1;
- (void)configEditMenuButtons;
- (_Bool)enableMenuAction;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

