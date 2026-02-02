//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpLiveNecessaryParams;

@interface WCFinderJumpInfoDynamicCarouselLivingViewModel
{
    FinderJumpLiveNecessaryParams *_livingParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FinderJumpLiveNecessaryParams *livingParams; // @synthesize livingParams=_livingParams;
- (void)reloadViewProperties;
- (id)defaultActionBackgroundColor;
- (id)defaultActionTitleColor;
- (_Bool)_initLiveNoticeParams;
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;

@end

