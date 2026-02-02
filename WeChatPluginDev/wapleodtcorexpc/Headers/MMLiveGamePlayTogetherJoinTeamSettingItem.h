//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveGamePlayTogetherJoinTeamSettingItem
{
    unsigned int _curJoinTeamMode;
    unsigned int _curCoinValue;
    NSString *_labelText;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int curCoinValue; // @synthesize curCoinValue=_curCoinValue;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (double)heightForCell;

@end

