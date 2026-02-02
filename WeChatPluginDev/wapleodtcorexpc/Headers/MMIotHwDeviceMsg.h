//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMIotHwAppFile, MMIotHwImage, MMIotHwLocation, MMIotHwMusic, MMIotHwUrl, MMIotHwVideo;

@interface MMIotHwDeviceMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMIotHwAppFile *fileMsg; // @dynamic fileMsg;
@property(retain, nonatomic) MMIotHwImage *imageMsg; // @dynamic imageMsg;
@property(retain, nonatomic) MMIotHwLocation *locationMsg; // @dynamic locationMsg;
@property(retain, nonatomic) MMIotHwMusic *musicMsg; // @dynamic musicMsg;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) MMIotHwUrl *urlMsg; // @dynamic urlMsg;
@property(retain, nonatomic) MMIotHwVideo *videoMsg; // @dynamic videoMsg;

@end

