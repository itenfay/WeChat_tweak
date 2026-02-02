//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HwDeviceMsg_HwAppFile, HwDeviceMsg_HwImage, HwDeviceMsg_HwLocation, HwDeviceMsg_HwMusic, HwDeviceMsg_HwUrl, HwDeviceMsg_HwVideo;

@interface HwDeviceMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) HwDeviceMsg_HwAppFile *fileMsg; // @dynamic fileMsg;
@property(retain, nonatomic) HwDeviceMsg_HwImage *imageMsg; // @dynamic imageMsg;
@property(retain, nonatomic) HwDeviceMsg_HwLocation *locationMsg; // @dynamic locationMsg;
@property(retain, nonatomic) HwDeviceMsg_HwMusic *musicMsg; // @dynamic musicMsg;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) HwDeviceMsg_HwUrl *urlMsg; // @dynamic urlMsg;
@property(retain, nonatomic) HwDeviceMsg_HwVideo *videoMsg; // @dynamic videoMsg;

@end

