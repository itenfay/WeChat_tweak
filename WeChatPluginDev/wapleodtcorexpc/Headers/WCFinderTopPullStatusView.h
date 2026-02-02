//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel, UIScrollView, WCFinderAnimationLoadingView;
@protocol WCFinderTopPullStatusViewDelegate;

@interface WCFinderTopPullStatusView : UIView
{
    _Bool _enable;
    _Bool _isDragging;
    id <WCFinderTopPullStatusViewDelegate> _delegate;
    unsigned long long _state;
    UIView *_container;
    UIScrollView *_gestureView;
    UILabel *_label;
    WCFinderAnimationLoadingView *_loadingView;
    CDUnknownBlockType _uninstallBlock;
}

+ (id)placeholder:(id)arg1 commit:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(copy, nonatomic) CDUnknownBlockType uninstallBlock; // @synthesize uninstallBlock=_uninstallBlock;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIScrollView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderTopPullStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)willMoveToSuperview:(id)arg1;
- (void)_doLayout;
- (void)layoutSubviews;
- (id)ensureLabel:(_Bool)arg1;
- (id)ensureLoadingView:(_Bool)arg1;
- (void)ensureDisplayForState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)onChangeState:(unsigned long long)arg1;
- (void)onNomore;
- (void)onError;
- (void)onLoading;
- (void)onNormal;
- (void)onTapRetry;
- (void)onTriggerPull;
- (_Bool)_allowTopPull;
- (_Bool)_shouldPullShowSelf;
- (_Bool)_stateIsHidden;
- (void)handlePan:(id)arg1;
- (void)installToContainer:(id)arg1 scrollView:(id)arg2 uninstallBlock:(CDUnknownBlockType)arg3;

@end

