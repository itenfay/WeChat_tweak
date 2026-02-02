//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface MMFinderLivePkTaskedBonusBarDebriefingContentView : UIView
{
    UIView *_scaleContainer;
    UILabel *_contentLabel;
    double _pointOfInterestInLabel;
}

- (void).cxx_destruct;
@property(nonatomic) double pointOfInterestInLabel; // @synthesize pointOfInterestInLabel=_pointOfInterestInLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *scaleContainer; // @synthesize scaleContainer=_scaleContainer;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithModel:(id)arg1;
@property(readonly, nonatomic) struct CGPoint highlightedPointOfInterest;
@property(readonly, nonatomic) UIColor *contentShadowColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *currentPreferredGiftId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

