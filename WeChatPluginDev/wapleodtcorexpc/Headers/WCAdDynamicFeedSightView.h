//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdDynamicFeedSightView
{
    _Bool _alreadyPlayedToEndFlag;
}

@property(nonatomic) _Bool alreadyPlayedToEndFlag; // @synthesize alreadyPlayedToEndFlag=_alreadyPlayedToEndFlag;
- (_Bool)hasEndCover;
- (void)exitVideoPlay;
- (void)onWCPlayerPlayEnd:(_Bool)arg1;
- (void)pauseWCPlayer;
- (void)startWCPlayer;
- (void)customPlayerInfo:(id)arg1;
- (void)layoutSubviews;

@end

