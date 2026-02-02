//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, RecvChannelDynamicColor, RecvChannelTextInfo, RecvChannel_SubTitleInfo, SubRecvChannelInfo, TipsInfo;

@interface RecvChannel : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int chooseGuideDisplayTimes; // @dynamic chooseGuideDisplayTimes;
@property(retain, nonatomic) RecvChannelDynamicColor *dynamicBgColor; // @dynamic dynamicBgColor;
@property(retain, nonatomic) NSString *firstChooseGuide; // @dynamic firstChooseGuide;
@property(retain, nonatomic) NSString *firstChooseWording; // @dynamic firstChooseWording;
@property(retain, nonatomic) NSString *floatButton; // @dynamic floatButton;
@property(retain, nonatomic) RecvChannelTextInfo *jumpRemindInfo; // @dynamic jumpRemindInfo;
@property(retain, nonatomic) TipsInfo *onceUsageTips; // @dynamic onceUsageTips;
@property(nonatomic) unsigned int recvChannelAvailState; // @dynamic recvChannelAvailState;
@property(retain, nonatomic) NSString *recvChannelLogo; // @dynamic recvChannelLogo;
@property(retain, nonatomic) NSString *recvChannelName; // @dynamic recvChannelName;
@property(retain, nonatomic) NSString *recvChannelNameIcon; // @dynamic recvChannelNameIcon;
@property(retain, nonatomic) NSString *recvChannelNameNote; // @dynamic recvChannelNameNote;
@property(retain, nonatomic) RecvChannel_SubTitleInfo *recvChannelSubTitle; // @dynamic recvChannelSubTitle;
@property(nonatomic) unsigned int recvChannelType; // @dynamic recvChannelType;
@property(nonatomic) unsigned int recvChannelUnavailReason; // @dynamic recvChannelUnavailReason;
@property(retain, nonatomic) SubRecvChannelInfo *subRecvChannelInfo; // @dynamic subRecvChannelInfo;
@property(retain, nonatomic) NSMutableArray *switchAvailchannelTips; // @dynamic switchAvailchannelTips;
@property(retain, nonatomic) TipsInfo *unavailTips; // @dynamic unavailTips;

@end

