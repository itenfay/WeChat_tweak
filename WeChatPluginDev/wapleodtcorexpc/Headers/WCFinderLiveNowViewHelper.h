//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveNowViewHelper : NSObject
{
}

+ (_Bool)openAudienceNewRecommendCardView:(unsigned int)arg1;
+ (_Bool)openAudienceNewLivingCardView:(unsigned int)arg1;
+ (_Bool)openAudienceNewReplayCardView:(unsigned int)arg1;
+ (_Bool)shouldReportAudienceCardView:(id)arg1;
+ (id)getReportAudienceCardViewFromShareItem:(id)arg1;
+ (void)reportAudienceCardViewFromShareItem:(id)arg1 shareType:(long long)arg2 isClick:(_Bool)arg3;
+ (void)reportAudienceCardViewFromLiveInfo:(id)arg1 isClick:(_Bool)arg2;
+ (void)preloadCompleteVcReplayFeed:(id)arg1;
+ (void)realPreloadReplayFeed:(id)arg1;
+ (void)fetchReplayData:(id)arg1;
+ (_Bool)needPreloadReplay:(id)arg1;
+ (void)preloadReplayWithShareItem:(id)arg1;
+ (void)onFinderLiveShareViewReplayUpdateLiveInfo:(id)arg1 tid:(id)arg2;
+ (int)getLiveCellViewType:(id)arg1;
+ (_Bool)isPaidLive:(id)arg1;
+ (_Bool)isRePlayJumpFeed:(id)arg1;
+ (_Bool)isLiveEndState:(id)arg1;
+ (_Bool)isEndCardNewLiveState:(id)arg1;
+ (int)getLiveCellViewTypeWithLiveInfo:(id)arg1;
+ (void)updateLiveNowView:(id)arg1 cellViewType:(int)arg2 sharePageStatus:(unsigned int)arg3;
+ (void)updateLiveNowView:(id)arg1 liveInfo:(id)arg2;
+ (void)updateLiveNowView:(id)arg1 shareItem:(id)arg2;
+ (void)updateLiveNowView:(id)arg1 msg:(id)arg2;
+ (id)getLiveNowViewDisplayTextFromCellViewType:(int)arg1 sharePageStatus:(unsigned int)arg2;
+ (id)getLiveNowViewDisplayTextFromMsg:(id)arg1;

@end

