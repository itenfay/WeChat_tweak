//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, MMFinderLiveLiveRoleSignView, MMUIImageView, MMUILabel, NSString, WCFinderHeadImageView;
@protocol MMFinderLiveGloryTopItemViewDelegate;

@interface MMFinderLiveGloryTopItemView
{
    _Bool _alwaysDark;
    id <MMFinderLiveGloryTopItemViewDelegate> _delegate;
    FinderLiveContact *_contact;
    unsigned long long _style;
    WCFinderHeadImageView *_headImageView;
    MMUIImageView *_headImageBoarderView;
    MMUILabel *_nameLabel;
    MMUILabel *_heatCountLabel;
    MMUIImageView *_roleIconImageView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysDark; // @synthesize alwaysDark=_alwaysDark;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMUIImageView *roleIconImageView; // @synthesize roleIconImageView=_roleIconImageView;
@property(retain, nonatomic) MMUILabel *heatCountLabel; // @synthesize heatCountLabel=_heatCountLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMUIImageView *headImageBoarderView; // @synthesize headImageBoarderView=_headImageBoarderView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) FinderLiveContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <MMFinderLiveGloryTopItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)boarderImage:(_Bool)arg1;
- (struct CGSize)headSize:(_Bool)arg1;
- (double)wechatImageCorner;
- (id)hideAvatorHeadImage;
- (id)emptyAvatorHeadImage;
- (void)handleNameLabelTapGesture;
- (void)_internalClickHead;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)updateHeadForHideAvator;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)arg1;
- (void)updateViewContents;
- (void)showTipsViewIfNeed;
- (void)checkNeedShowTips;
- (void)updateWith:(id)arg1;
- (void)updateHeightAndLayout;
- (void)setupSubviews;
- (id)initWithStyle:(unsigned long long)arg1 alwaysDark:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

