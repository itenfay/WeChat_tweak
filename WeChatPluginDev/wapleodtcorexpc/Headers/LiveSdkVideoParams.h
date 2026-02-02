//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, VideoPKParams;

@interface LiveSdkVideoParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int capFps; // @dynamic capFps;
@property(nonatomic) unsigned int capFpsHevc; // @dynamic capFpsHevc;
@property(nonatomic) unsigned int capFpsScreenrecord; // @dynamic capFpsScreenrecord;
@property(nonatomic) unsigned int encAdjustRes; // @dynamic encAdjustRes;
@property(nonatomic) unsigned int encBr; // @dynamic encBr;
@property(nonatomic) unsigned int encBrHevc; // @dynamic encBrHevc;
@property(nonatomic) unsigned int encBrHevcMin; // @dynamic encBrHevcMin;
@property(nonatomic) unsigned int encBrMin; // @dynamic encBrMin;
@property(nonatomic) unsigned int encBrScreenrecord; // @dynamic encBrScreenrecord;
@property(nonatomic) unsigned int encGop; // @dynamic encGop;
@property(nonatomic) unsigned int encResEnum; // @dynamic encResEnum;
@property(nonatomic) unsigned int encResEnumHevc; // @dynamic encResEnumHevc;
@property(nonatomic) unsigned int encResEnumScreenrecord; // @dynamic encResEnumScreenrecord;
@property(retain, nonatomic) NSString *encoderCfgJson; // @dynamic encoderCfgJson;
@property(nonatomic) unsigned int hevcEncEnable; // @dynamic hevcEncEnable;
@property(retain, nonatomic) VideoPKParams *micBig9X16; // @dynamic micBig9X16;
@property(retain, nonatomic) VideoPKParams *micMiddle1X1; // @dynamic micMiddle1X1;
@property(retain, nonatomic) VideoPKParams *micMiddle9X16; // @dynamic micMiddle9X16;
@property(retain, nonatomic) VideoPKParams *micSmall1X1; // @dynamic micSmall1X1;
@property(retain, nonatomic) VideoPKParams *micSmall9X16; // @dynamic micSmall9X16;
@property(nonatomic) unsigned int qosControlModeEnum; // @dynamic qosControlModeEnum;
@property(nonatomic) unsigned int qosPreferneceEnum; // @dynamic qosPreferneceEnum;
@property(nonatomic) unsigned int resModeEnum; // @dynamic resModeEnum;

@end

