//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameCenterTabSettingControl_TabJumpLiteAppInfo, GameCenterTabSettingControl_TabJumpWeappInfo, GameCenterTabSettingControl_TabReport, NSMutableArray, NSString;

@interface GameCenterTabSettingControl_TabSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cornerSettings; // @dynamic cornerSettings;
@property(retain, nonatomic) NSString *darkModeIconUrl; // @dynamic darkModeIconUrl;
@property(retain, nonatomic) NSString *darkModeSelectedIconUrl; // @dynamic darkModeSelectedIconUrl;
@property(retain, nonatomic) NSString *darkModeSelectedTitleColor; // @dynamic darkModeSelectedTitleColor;
@property(retain, nonatomic) NSString *darkModeTitleColor; // @dynamic darkModeTitleColor;
@property(nonatomic) _Bool disablePreloadLiteapp; // @dynamic disablePreloadLiteapp;
@property(nonatomic) _Bool disablePreloadWebview; // @dynamic disablePreloadWebview;
@property(nonatomic) _Bool enableRememberExit; // @dynamic enableRememberExit;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) GameCenterTabSettingControl_TabJumpLiteAppInfo *jumpLiteapp; // @dynamic jumpLiteapp;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) GameCenterTabSettingControl_TabJumpWeappInfo *jumpWeapp; // @dynamic jumpWeapp;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int preloadLiteappDelay; // @dynamic preloadLiteappDelay;
@property(nonatomic) unsigned int preloadWebviewDelayTime; // @dynamic preloadWebviewDelayTime;
@property(retain, nonatomic) GameCenterTabSettingControl_TabReport *report; // @dynamic report;
@property(retain, nonatomic) NSString *selectedIconUrl; // @dynamic selectedIconUrl;
@property(retain, nonatomic) NSString *selectedTitleColor; // @dynamic selectedTitleColor;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *titleColor; // @dynamic titleColor;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

