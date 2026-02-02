//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveCustomPIPMinimizeIndicatorContainerView, MMLiveTaskId, NSString;
@protocol MMFinderLivePIPMinimizeDisplayViewProtocol, MMFinderLivePIPMinimizeLogicControllerDelegate, MMFinderLivePIPMinimizeLogicDelegate;

@interface MMFinderLiveCustomPIPMinimizeView : UIView
{
    CDUnknownBlockType _getIndicatorStateBlock;
    id <MMFinderLivePIPMinimizeLogicControllerDelegate> _logicControllerDelegate;
    id <MMFinderLivePIPMinimizeLogicDelegate> _logicDelegate;
    MMLiveTaskId *_liveTaskId;
    MMFinderLiveCustomPIPMinimizeIndicatorContainerView *_indicatorContainerView;
    UIView<MMFinderLivePIPMinimizeDisplayViewProtocol> *_displayContentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView<MMFinderLivePIPMinimizeDisplayViewProtocol> *displayContentView; // @synthesize displayContentView=_displayContentView;
@property(retain, nonatomic) MMFinderLiveCustomPIPMinimizeIndicatorContainerView *indicatorContainerView; // @synthesize indicatorContainerView=_indicatorContainerView;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <MMFinderLivePIPMinimizeLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) __weak id <MMFinderLivePIPMinimizeLogicControllerDelegate> logicControllerDelegate; // @synthesize logicControllerDelegate=_logicControllerDelegate;
@property(copy, nonatomic) CDUnknownBlockType getIndicatorStateBlock; // @synthesize getIndicatorStateBlock=_getIndicatorStateBlock;
- (void)setIndicatorState:(unsigned long long)arg1;
- (void)onViewDidDeAttachFromPIPContainer;
- (void)onViewWillAttachToPIPContainer;
- (void)hideIndicators;
- (void)displayIndicators;
- (void)updateDisplayContentView:(id)arg1;
- (void)dismissLiveViewFromMinimizeContainer;
- (void)attachContentViewToMinimizeContainer;
- (void)layoutIndicatorContainerView;
- (void)layoutDisplayContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

