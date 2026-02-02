//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSString, UIViewController;
@protocol WCFinderFullMultiMediaCollectionGestureConflictHandler;

@interface WCFinderFullMultiMediaCollectionView : UICollectionView
{
    UIViewController<WCFinderFullMultiMediaCollectionGestureConflictHandler> *_currentHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController<WCFinderFullMultiMediaCollectionGestureConflictHandler> *currentHandler; // @synthesize currentHandler=_currentHandler;
- (void)selfDidScroll;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

