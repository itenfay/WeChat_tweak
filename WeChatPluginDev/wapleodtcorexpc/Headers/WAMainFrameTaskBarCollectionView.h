//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSString, UIPanGestureRecognizer;

@interface WAMainFrameTaskBarCollectionView : UICollectionView
{
    _Bool _canHookPanGesture;
    UIPanGestureRecognizer *_mainFrameCollectionViewPanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *mainFrameCollectionViewPanGesture; // @synthesize mainFrameCollectionViewPanGesture=_mainFrameCollectionViewPanGesture;
@property(nonatomic) _Bool canHookPanGesture; // @synthesize canHookPanGesture=_canHookPanGesture;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)recheckCanHookPanGesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)initPanGesture;
- (void)doInit;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

