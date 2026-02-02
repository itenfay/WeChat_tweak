//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class MMFinderLiveOnlineStateCollectionViewCell, MMLiveTaskId, NSString;

@interface MMFinderLiveOnlineStateCollectionView : UICollectionView
{
    MMLiveTaskId *_taskId;
    MMFinderLiveOnlineStateCollectionViewCell *_myUserStateCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveOnlineStateCollectionViewCell *myUserStateCell; // @synthesize myUserStateCell=_myUserStateCell;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

