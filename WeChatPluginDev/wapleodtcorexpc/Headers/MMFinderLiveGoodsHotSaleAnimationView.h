//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGFile, PAGView, UILabel;

@interface MMFinderLiveGoodsHotSaleAnimationView : UIView
{
    PAGFile *_backgroundPAG;
    UILabel *_hotSaleLabel;
    UILabel *_hotSaleCountLabel;
    PAGView *_hotSaleBackgroundView;
    CDUnknownBlockType _salesUpdatingCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType salesUpdatingCompletion; // @synthesize salesUpdatingCompletion=_salesUpdatingCompletion;
@property(retain, nonatomic) PAGView *hotSaleBackgroundView; // @synthesize hotSaleBackgroundView=_hotSaleBackgroundView;
@property(retain, nonatomic) UILabel *hotSaleCountLabel; // @synthesize hotSaleCountLabel=_hotSaleCountLabel;
@property(retain, nonatomic) UILabel *hotSaleLabel; // @synthesize hotSaleLabel=_hotSaleLabel;
@property(retain, nonatomic) PAGFile *backgroundPAG; // @synthesize backgroundPAG=_backgroundPAG;
- (double)hotSaleAnimationFirstPartDuration;
- (double)hotSaleAnimationLastPartDuration;
- (double)hotSaleTextAnimationDuration;
- (void)finishHotSaleAnimation:(CDUnknownBlockType)arg1;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hotSaleLabelFirstAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hotSaleLabelAppear:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hotSaleBackgroundViewAppear:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (double)ratio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

