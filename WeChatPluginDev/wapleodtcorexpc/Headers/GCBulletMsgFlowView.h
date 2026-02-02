//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, NSMutableArray, NSString, UITableView;

@interface GCBulletMsgFlowView : UIView
{
    _Bool _isThinStyle;
    NSArray *_originMsgList;
    NSMutableArray *_displayMsgList;
    UIView *_tableViewContainer;
    UITableView *_msgTableView;
    UIView *_lineView;
    MMTimer *_displayTimer;
    long long _curLoadIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long curLoadIndex; // @synthesize curLoadIndex=_curLoadIndex;
@property(retain, nonatomic) MMTimer *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UITableView *msgTableView; // @synthesize msgTableView=_msgTableView;
@property(retain, nonatomic) UIView *tableViewContainer; // @synthesize tableViewContainer=_tableViewContainer;
@property(copy, nonatomic) NSMutableArray *displayMsgList; // @synthesize displayMsgList=_displayMsgList;
@property(copy, nonatomic) NSArray *originMsgList; // @synthesize originMsgList=_originMsgList;
@property(nonatomic) _Bool isThinStyle; // @synthesize isThinStyle=_isThinStyle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)tableViewScrollToBottomWithAnimation:(_Bool)arg1;
- (void)loadBulletMsgList:(id)arg1;
- (void)startLoadMsgLoop;
- (void)startRepeatLoopWhenOneRoundFinish;
- (double)msgLabelWidth;
- (double)tableViewWidth;
- (void)configLineView;
- (void)configTableViewContainerGradientLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

