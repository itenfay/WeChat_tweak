//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePkTaskedBonusBarBackgroundHighView, MMFinderLivePkTaskedBonusBarBackgroundLowView, NSString;

@interface MMFinderLivePkTaskedBonusBarResultBackgroundView : UIView
{
    MMFinderLivePkTaskedBonusBarBackgroundHighView *_succeededBackgroundView;
    MMFinderLivePkTaskedBonusBarBackgroundLowView *_failedBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundLowView *failedBackgroundView; // @synthesize failedBackgroundView=_failedBackgroundView;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundHighView *succeededBackgroundView; // @synthesize succeededBackgroundView=_succeededBackgroundView;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

