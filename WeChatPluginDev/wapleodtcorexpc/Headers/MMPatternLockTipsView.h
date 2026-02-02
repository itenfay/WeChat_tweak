//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMPatternLockTipsView : UIView
{
    long long _curScene;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
- (_Bool)shouldShowSpecailEntranceTip;
- (void)animationShake;
- (void)updateContentInSetup;
- (void)updateContentInBlock;
- (void)updateContentInResultInvalid;
- (void)updateContentInComfirmError;
- (void)updateContentInComfirm;
- (void)updateContentInPwdErrorWithRetryTime:(long long)arg1 animated:(_Bool)arg2;
- (void)setupFirstTips;
- (void)initView;
- (id)initTipsViewWithFrame:(struct CGRect)arg1 andPatternScene:(long long)arg2;

@end

