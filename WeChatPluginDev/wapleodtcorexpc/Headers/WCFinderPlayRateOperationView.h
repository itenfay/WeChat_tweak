//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderFeedContentVM;

@interface WCFinderPlayRateOperationView : UIView
{
    CDUnknownBlockType _shownAction;
    CDUnknownBlockType _dismissAction;
    CDUnknownBlockType _selectAction;
    UIView *_maskView;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) CDUnknownBlockType shownAction; // @synthesize shownAction=_shownAction;
- (void)onResignActive:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)handleEnterBackgroundEvent;
- (_Bool)isInShowingState;
- (void)onSelect:(CDUnknownBlockType)arg1;
- (void)onDismiss:(CDUnknownBlockType)arg1;
- (void)onShown:(CDUnknownBlockType)arg1;
- (void)onPlayRate:(id)arg1;
- (void)onDismissAction;
- (void)onReportPlayRateResult:(double)arg1;
- (void)onDismiss;
- (void)showOnView:(id)arg1 withVM:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

