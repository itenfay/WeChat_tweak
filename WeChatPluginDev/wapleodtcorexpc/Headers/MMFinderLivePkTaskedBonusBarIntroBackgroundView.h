//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface MMFinderLivePkTaskedBonusBarIntroBackgroundView : UIView
{
    UIView *_backgroundView;
    UIImageView *_leftDecoratorView;
    UIImageView *_rightDecoratorView;
    struct CGRect _contentArea;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentArea; // @synthesize contentArea=_contentArea;
@property(retain, nonatomic) UIImageView *rightDecoratorView; // @synthesize rightDecoratorView=_rightDecoratorView;
@property(retain, nonatomic) UIImageView *leftDecoratorView; // @synthesize leftDecoratorView=_leftDecoratorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)layoutSubviews;
- (void)updateLayoutToMatchContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

