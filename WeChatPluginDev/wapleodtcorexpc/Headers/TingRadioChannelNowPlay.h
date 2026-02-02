//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TingFlowPlayerProtocol;

@interface TingRadioChannelNowPlay
{
    id <TingFlowPlayerProtocol> _player;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TingFlowPlayerProtocol> player; // @synthesize player=_player;
- (long long)onPrevChannelCommand:(id)arg1;
- (long long)onNextChannelCommand:(id)arg1;
- (void)registerCommandCenterActions;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 player:(id)arg2;
- (id)moduleId;
- (id)activePlayer;

@end

