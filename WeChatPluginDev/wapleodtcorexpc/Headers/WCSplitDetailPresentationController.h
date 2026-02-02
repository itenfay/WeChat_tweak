//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@protocol WCSplitDetailPresentationControllerDelegate;

@interface WCSplitDetailPresentationController : UIPresentationController
{
    _Bool _isChangingSize;
    double _primaryWidth;
    id <WCSplitDetailPresentationControllerDelegate> _splitDelegate;
    CDUnknownBlockType _transtionEndHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transtionEndHandler; // @synthesize transtionEndHandler=_transtionEndHandler;
@property(nonatomic) _Bool isChangingSize; // @synthesize isChangingSize=_isChangingSize;
@property(nonatomic) __weak id <WCSplitDetailPresentationControllerDelegate> splitDelegate; // @synthesize splitDelegate=_splitDelegate;
@property(nonatomic) double primaryWidth; // @synthesize primaryWidth=_primaryWidth;
- (_Bool)isInBackground;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;
- (void)updatePresentedFrame:(struct CGRect)arg1 displayMode:(long long)arg2;

@end

