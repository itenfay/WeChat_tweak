//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveBattleSettingInfo;

@interface MMFinderLiveConnectMicPlugin
{
    _Bool _isMultiAnchorMicEnabled;
    _Bool _isAudiencePkEnable;
    _Bool _isCrossRoomPkEnable;
    _Bool _isOrdinaryLiveInviteAudienceMicEnabled;
    _Bool _isDisplayMicLocationEnabled;
    unsigned int _locationDisplayTimeInterval;
    FinderLiveBattleSettingInfo *_battleSettings;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int locationDisplayTimeInterval; // @synthesize locationDisplayTimeInterval=_locationDisplayTimeInterval;
@property(nonatomic) _Bool isDisplayMicLocationEnabled; // @synthesize isDisplayMicLocationEnabled=_isDisplayMicLocationEnabled;
@property(nonatomic) _Bool isOrdinaryLiveInviteAudienceMicEnabled; // @synthesize isOrdinaryLiveInviteAudienceMicEnabled=_isOrdinaryLiveInviteAudienceMicEnabled;
@property(retain, nonatomic) FinderLiveBattleSettingInfo *battleSettings; // @synthesize battleSettings=_battleSettings;
@property(nonatomic) _Bool isCrossRoomPkEnable; // @synthesize isCrossRoomPkEnable=_isCrossRoomPkEnable;
@property(nonatomic) _Bool isAudiencePkEnable; // @synthesize isAudiencePkEnable=_isAudiencePkEnable;
@property(nonatomic) _Bool isMultiAnchorMicEnabled; // @synthesize isMultiAnchorMicEnabled=_isMultiAnchorMicEnabled;
- (void)updateIsDisplayMicLocationEnabled:(_Bool)arg1;
- (void)updateLocationDisplayTimeInterval:(unsigned int)arg1;
- (void)updateIsOrdinaryLiveInviteAudienceMicEnabled:(_Bool)arg1;
- (void)updateIsCrossRoomPkEnable:(_Bool)arg1;
- (void)updateIsAudiencePkEnable:(_Bool)arg1;
- (void)updateMultiAnchorMicEnabled:(_Bool)arg1;

@end

