//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface WCCommentListTipsView : UIView
{
    CDUnknownBlockType _clickBlock;
    NSString *_tips;
    UILabel *_tipsLabel;
    UIButton *_clickButton;
}

+ (double)heightForTips:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void)onClickButton;
- (void)layoutSubviews;
- (id)createMaskShapeLayer;
- (void)initClickButton;
- (void)initTipsLabel;
- (void)initBackgroundView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

