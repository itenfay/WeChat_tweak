//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DiscoverEntranceSetSwitchInfo;

@interface DiscoverEntranceSettingCellHandler_NearbyLive
{
    _Bool _nearbyPeopleEntranceEnabled;
    DiscoverEntranceSetSwitchInfo *_nearByPeopleSwitchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverEntranceSetSwitchInfo *nearByPeopleSwitchInfo; // @synthesize nearByPeopleSwitchInfo=_nearByPeopleSwitchInfo;
@property(nonatomic) _Bool nearbyPeopleEntranceEnabled; // @synthesize nearbyPeopleEntranceEnabled=_nearbyPeopleEntranceEnabled;
- (id)statusDesc;
- (void)commitNewNearbyPeopleEntranceValue:(_Bool)arg1;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
- (id)makeSettingSheetView;
- (unsigned long long)settingEntranceSwitchType;
- (_Bool)originalEntraceSwitchOn;
- (id)iconImage;
- (id)title;
- (id)init;

@end

