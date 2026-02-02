//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpLiveReservationNecessaryParams, FinderLiveNoticeInfo, NSString;

@interface WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel
{
    FinderJumpLiveReservationNecessaryParams *_liveNoticeParams;
    FinderLiveNoticeInfo *_liveNoticeInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(readonly, nonatomic) FinderJumpLiveReservationNecessaryParams *liveNoticeParams; // @synthesize liveNoticeParams=_liveNoticeParams;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)reloadViewProperties;
- (id)defaultActionBackgroundColor;
- (id)defaultActionTitleColor;
- (_Bool)_initLiveNoticeParams;
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

