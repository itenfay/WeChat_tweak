//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentMsgImgFigurePageView, MMUILabel, NSArray, NSString;
@protocol IntelligentMsgImgFigurePageHeaderViewDelegate;

@interface IntelligentMsgImgFigurePageHeaderView
{
    MMUILabel *m_titleLabel;
    IntelligentMsgImgFigurePageView *m_figurePageView;
    NSArray *m_arrFaceClusterMessageItem;
    id <IntelligentMsgImgFigurePageHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgFigurePageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMsgFigureImgClicked:(id)arg1;
- (void)onTransitionToNewSize;
- (void)updateMsgImgFigurePageHeaderView:(id)arg1;
- (double)calculationHeight;
- (void)layoutSubviews;
- (void)initFigurePageView;
- (void)layoutFigurePageView;
- (void)layoutTitleLabel;
- (void)layoutView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

