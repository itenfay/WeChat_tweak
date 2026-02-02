//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WARemoteDebug_DeviceInfo, WARemoteDebug_RegisterInterface;

@interface WARemoteDebug_SetupContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *configureJs; // @dynamic configureJs;
@property(retain, nonatomic) WARemoteDebug_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *publicJsMd5; // @dynamic publicJsMd5;
@property(retain, nonatomic) WARemoteDebug_RegisterInterface *registerInterface; // @dynamic registerInterface;
@property(nonatomic) unsigned int supportCompressAlgo; // @dynamic supportCompressAlgo;
@property(retain, nonatomic) NSString *threeJsMd5; // @dynamic threeJsMd5;

@end

