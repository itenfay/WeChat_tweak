//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppHardWareRankMessageLogicController, AppHardWareRankMessageViewModel, UIButton, UIImageView, UILabel;

@interface AppHardWareRankMessageCellView
{
    UIImageView *m_bgImageView;
    UILabel *m_scoreDisplay;
    UILabel *m_scoreTitle;
    UILabel *m_rankDisplay;
    UILabel *m_rankTitle;
    UIButton *m_stateBtn;
    AppHardWareRankMessageLogicController *_logicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppHardWareRankMessageLogicController *logicController; // @synthesize logicController=_logicController;
- (id)removeAllNumberAndComma:(id)arg1;
- (void)setupAccessibility;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickStateBtn;
- (void)onTouchUpInside;
- (id)getFontColor;
- (id)getBackgroundImageHL;
- (id)getBackgroundImage;
- (void)initStateBtn:(int)arg1 offsetY:(double *)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppHardWareRankMessageViewModel *viewModel;

@end

