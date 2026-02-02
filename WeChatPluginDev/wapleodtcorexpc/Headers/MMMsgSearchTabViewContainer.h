//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIScrollView;
@protocol MMMsgSearchTabPageViewDelegate;

@interface MMMsgSearchTabViewContainer : UIView
{
    id <MMMsgSearchTabPageViewDelegate> delegate;
    UIScrollView *_tabContainer;
    NSMutableArray *_tabViewArray;
    unsigned long long _selectIndex;
    UIView *_tabUnderLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *tabUnderLine; // @synthesize tabUnderLine=_tabUnderLine;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *tabViewArray; // @synthesize tabViewArray=_tabViewArray;
@property(retain, nonatomic) UIScrollView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(nonatomic) __weak id <MMMsgSearchTabPageViewDelegate> delegate; // @synthesize delegate;
- (void)searchTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (struct CGRect)tabUnderLineFrameForTabView:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updateTabViewContainerLayout;
- (void)setTabLodeTypeWithMsgSearchType:(unsigned int)arg1 msgSearchLoadingType:(unsigned int)arg2 loadingAddNumber:(unsigned int)arg3;
- (void)reloadSearchTabViewContainerWithTabViewArray:(id)arg1;
- (_Bool)checkHadMsgSearchType:(unsigned int)arg1;
- (void)selectTabWithMsgSearchType:(unsigned int)arg1;
- (unsigned int)getMsgSearchType;
- (void)adjustTabViewFrame;
- (unsigned long long)getSelectIndex;
- (void)setupUI;
- (double)calculateTabContainerHeight;
- (double)calculateHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithTabViewArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

