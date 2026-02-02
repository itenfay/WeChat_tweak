//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameCenterTabSettingControl_TabConfiguration, NSMutableArray;

@interface GameCenterTabSettingControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool downloadIconDisabled; // @dynamic downloadIconDisabled;
@property(nonatomic) _Bool enableExternPage; // @dynamic enableExternPage;
@property(retain, nonatomic) GameCenterTabSettingControl_TabConfiguration *tab; // @dynamic tab;
@property(nonatomic) _Bool tabStyleDisabled; // @dynamic tabStyleDisabled;
@property(retain, nonatomic) NSMutableArray *tabStyleList; // @dynamic tabStyleList;

@end

