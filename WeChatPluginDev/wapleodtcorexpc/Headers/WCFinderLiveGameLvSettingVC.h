//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameRankSwitchInfo;

@interface WCFinderLiveGameLvSettingVC
{
    GameRankSwitchInfo *_gameLiveSwitchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameRankSwitchInfo *gameLiveSwitchInfo; // @synthesize gameLiveSwitchInfo=_gameLiveSwitchInfo;
- (void)onGameLiveRankSwitched:(id)arg1 cellInfo:(id)arg2;
- (void)onBuildTables;
- (void)viewDidLoad;

@end

