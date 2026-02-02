//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameCenterTabSettingControl_HomeBarConfiguration, GameCenterTabSettingControl_TabDefaultConfiguration, NSMutableArray, NSString;

@interface GameCenterTabSettingControl_TabConfiguration : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) NSString *darkModeBackgroundColor; // @dynamic darkModeBackgroundColor;
@property(retain, nonatomic) GameCenterTabSettingControl_TabDefaultConfiguration *defaultTab; // @dynamic defaultTab;
@property(retain, nonatomic) GameCenterTabSettingControl_HomeBarConfiguration *homeBar; // @dynamic homeBar;
@property(retain, nonatomic) NSMutableArray *tabList; // @dynamic tabList;

@end

