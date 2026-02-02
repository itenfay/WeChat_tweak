//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveOnlineInfo, MMUILabel, MMUIView, NSMutableArray, NSString, UIImageView;

@interface MMFinderLiveOnlineInfoBar
{
    LiveOnlineInfo *_currentUserLiveOnlineInfo;
    NSMutableArray *_onlineTopRewarderInfoFacedes;
    MMUIView *_topUsersHeadersContainerView;
    MMUIView *_backgroundView;
    MMUILabel *_onlineCountLabel;
    NSMutableArray *_headImageViews;
    UIImageView *_arrowImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(retain, nonatomic) MMUILabel *onlineCountLabel; // @synthesize onlineCountLabel=_onlineCountLabel;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUIView *topUsersHeadersContainerView; // @synthesize topUsersHeadersContainerView=_topUsersHeadersContainerView;
@property(retain, nonatomic) NSMutableArray *onlineTopRewarderInfoFacedes; // @synthesize onlineTopRewarderInfoFacedes=_onlineTopRewarderInfoFacedes;
@property(retain, nonatomic) LiveOnlineInfo *currentUserLiveOnlineInfo; // @synthesize currentUserLiveOnlineInfo=_currentUserLiveOnlineInfo;
- (void)onOnlineStateButtonClicked;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateOnlineCountTitle:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)updateTopUsersHeadersContainerView;
- (void)updateWithOnlineBarInfo:(id)arg1 customCountStr:(id)arg2;
- (void)updateWithOnlineBarInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

