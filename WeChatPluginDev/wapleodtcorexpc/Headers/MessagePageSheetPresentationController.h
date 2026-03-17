//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@interface MessagePageSheetPresentationController : UIPresentationController
{
    _Bool _isLifeCycleUnpair;
}

@property(nonatomic) _Bool isLifeCycleUnpair; // @synthesize isLifeCycleUnpair=_isLifeCycleUnpair;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)callFromViewControllerAppear;
- (void)callFromViewControllerDisappear;

@end

