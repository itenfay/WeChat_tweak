//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLifeSettingControl_JumpWeappInfo, NSMutableArray, NSString;

@interface GameLifeSettingControl_AppPanel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *darkModeIconUrl; // @dynamic darkModeIconUrl;
@property(retain, nonatomic) NSMutableArray *disableWordList; // @dynamic disableWordList;
@property(retain, nonatomic) NSString *enterId; // @dynamic enterId;
@property(retain, nonatomic) NSMutableArray *enterWordList; // @dynamic enterWordList;
@property(nonatomic) unsigned int halfScreenHeight; // @dynamic halfScreenHeight;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) GameLifeSettingControl_JumpWeappInfo *jumpWeapp; // @dynamic jumpWeapp;
@property(nonatomic) unsigned int panelType; // @dynamic panelType;
@property(nonatomic) _Bool showRedDot; // @dynamic showRedDot;

@end

