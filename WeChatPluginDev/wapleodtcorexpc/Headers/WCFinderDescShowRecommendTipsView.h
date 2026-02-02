//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WCFinderDescShowRecommendTipsView : UIView
{
    CDUnknownBlockType _clickActionBlock;
    UIButton *_actionButton;
    UIButton *_continueView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *continueView; // @synthesize continueView=_continueView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
- (void)resetActionButton;
- (id)titleLabelTextWithContentVM:(id)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)hideContinueView;
- (void)clickButtonAction;
- (void)setUpUI;
- (id)init;

@end

