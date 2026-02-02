//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdCombineFollowInfo, WCAdFollowItemView, WCAdURLImageView;
@protocol WCAdHalfScreenCombineFollowViewDelegate;

@interface WCAdHalfScreenCombineFollowView
{
    _Bool _isBrandFollowed;
    _Bool _isFinderFollowed;
    id <WCAdHalfScreenCombineFollowViewDelegate> _delegate;
    WCAdCombineFollowInfo *_combineFollowInfo;
    WCAdURLImageView *_headImageView;
    MMUILabel *_headTitleLabel;
    WCAdFollowItemView *_brandFollowItemView;
    WCAdFollowItemView *_finderFollowItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFollowItemView *finderFollowItemView; // @synthesize finderFollowItemView=_finderFollowItemView;
@property(retain, nonatomic) WCAdFollowItemView *brandFollowItemView; // @synthesize brandFollowItemView=_brandFollowItemView;
@property(retain, nonatomic) MMUILabel *headTitleLabel; // @synthesize headTitleLabel=_headTitleLabel;
@property(retain, nonatomic) WCAdURLImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isFinderFollowed; // @synthesize isFinderFollowed=_isFinderFollowed;
@property(nonatomic) _Bool isBrandFollowed; // @synthesize isBrandFollowed=_isBrandFollowed;
@property(retain, nonatomic) WCAdCombineFollowInfo *combineFollowInfo; // @synthesize combineFollowInfo=_combineFollowInfo;
@property(nonatomic) __weak id <WCAdHalfScreenCombineFollowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCheckStateChanged:(id)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)genDividerView:(double)arg1;
- (void)initDetailUI;
- (void)initCommonUI;
- (void)initSubview;
- (id)initWithCombineFollowInfo:(id)arg1 isBrandFollowed:(_Bool)arg2 isFinderFollowed:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

