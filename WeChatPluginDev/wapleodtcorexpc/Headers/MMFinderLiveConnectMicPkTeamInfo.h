//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicPkUIConf, NSMutableArray;

@interface MMFinderLiveConnectMicPkTeamInfo : NSObject
{
    NSMutableArray *_teams;
    MMFinderLiveConnectMicPkUIConf *_uiConf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicPkUIConf *uiConf; // @synthesize uiConf=_uiConf;
@property(retain, nonatomic) NSMutableArray *teams; // @synthesize teams=_teams;
- (id)firstValidTeam;
- (id)currentBattleTeamsForServer;
- (id)team2;
- (id)team1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)calculateTeamRank;

@end

