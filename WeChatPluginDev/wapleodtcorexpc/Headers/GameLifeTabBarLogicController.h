//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterTabSettingControl_TabConfiguration;

@interface GameLifeTabBarLogicController
{
    GameCenterTabSettingControl_TabConfiguration *_defaultTabConfiguration;
}

- (id)getTabStyleConfiguration;
- (id)getTabConfigurationFromGlobalConfig;
- (id)getTabConfiguration;
- (void)initDefaultTabConfiguration;
- (id)init;

@end

