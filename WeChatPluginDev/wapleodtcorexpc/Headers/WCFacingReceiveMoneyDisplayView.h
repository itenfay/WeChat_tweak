//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface WCFacingReceiveMoneyDisplayView
{
    UIView *backgroundView;
    id userInfo;
    struct CGRect m_frame;
    _Bool _bShowActionBar;
    unsigned int _codeType;
    NSString *_accessTips;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int codeType; // @synthesize codeType=_codeType;
@property(nonatomic) _Bool bShowActionBar; // @synthesize bShowActionBar=_bShowActionBar;
@property(retain, nonatomic) NSString *accessTips; // @synthesize accessTips=_accessTips;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void)closeView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showEndAnimation:(struct CGPoint)arg1;
- (void)showStartAnimation;
- (void)layoutSubviews;
- (void)setupDescContentWithDisplayName:(id)arg1 totalMoney:(id)arg2 startY:(double)arg3;
- (double)setupBackgroundViewWithFrame:(struct CGRect)arg1;
- (id)initWithUserDisplayName:(id)arg1 TotalMoney:(id)arg2 HeadImgUrl:(id)arg3 Frame:(struct CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(_Bool)arg6;
- (id)initWithUserName:(id)arg1 DisplayName:(id)arg2 TotalMoney:(id)arg3 Frame:(struct CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

