//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PAGView;

@interface MMFinderLiveOperationBottomButtonAnimator : NSObject
{
    PAGView *_pagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
- (void)replaceButtonIcon:(id)arg1 withImage:(id)arg2;
- (void)onAnimationEnd:(id)arg1;
- (id)getButtonRunningAnimationUrl:(id)arg1;
- (void)stopButtonAnimation:(id)arg1;
- (_Bool)isButtonRunningAnimation:(id)arg1;
- (id)getAddedPAGViewForButton:(id)arg1;
- (id)createCommonPAGView;
- (void)playPAGAnimationOnButton:(id)arg1 pagPath:(id)arg2 pagWebUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

