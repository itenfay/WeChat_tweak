//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicPKInfo, MMTableView, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMFinderLiveConnectMicAnchorPkContainerViewDelegate;

@interface MMFinderLiveConnectMicAnchorPkContainerView
{
    _Bool _isPkDisabled;
    _Bool _isApplicant;
    id <MMFinderLiveConnectMicAnchorPkContainerViewDelegate> _actionDelegate;
    MMTableView *_tableView;
    NSArray *_micUsers;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
    UIView *_contentView;
    UILabel *_pkTitleLabel;
    UIImageView *_pkIcon;
    UIButton *_closeMicButton;
    UIButton *_extraCloseMicButton;
    UIButton *_pkActionButton;
    UIView *_tableHeaderView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicant; // @synthesize isApplicant=_isApplicant;
@property(nonatomic) _Bool isPkDisabled; // @synthesize isPkDisabled=_isPkDisabled;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIButton *pkActionButton; // @synthesize pkActionButton=_pkActionButton;
@property(retain, nonatomic) UIButton *extraCloseMicButton; // @synthesize extraCloseMicButton=_extraCloseMicButton;
@property(retain, nonatomic) UIButton *closeMicButton; // @synthesize closeMicButton=_closeMicButton;
@property(retain, nonatomic) UIImageView *pkIcon; // @synthesize pkIcon=_pkIcon;
@property(retain, nonatomic) UILabel *pkTitleLabel; // @synthesize pkTitleLabel=_pkTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;
@property(retain, nonatomic) NSArray *micUsers; // @synthesize micUsers=_micUsers;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAnchorPkContainerViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestDismiss:(_Bool)arg1;
- (void)onTapPkAction;
- (void)onClickCloseMic;
- (void)closeAction;
- (id)mainScrollView;
- (void)layoutSubviews;
- (void)updatePkInfo:(id)arg1;
- (void)reCreatePkButton;
- (void)initViews;
- (id)initWithMicUsers:(id)arg1 disablePk:(_Bool)arg2 isApplicant:(_Bool)arg3 frame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

