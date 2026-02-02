//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveCdnPlayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int currentSvrCfg; // @dynamic currentSvrCfg;
@property(nonatomic) unsigned int failedBackFlag; // @dynamic failedBackFlag;
@property(nonatomic) unsigned int failedMainFlag; // @dynamic failedMainFlag;
@property(nonatomic) unsigned int failedSvrCfg; // @dynamic failedSvrCfg;
@property(nonatomic) unsigned int manualSwitchCfg; // @dynamic manualSwitchCfg;
@property(nonatomic) int playerEventId; // @dynamic playerEventId;
@property(retain, nonatomic) NSData *qualityTagCacheBuf; // @dynamic qualityTagCacheBuf;
@property(nonatomic) int sdkErrCode; // @dynamic sdkErrCode;

@end

