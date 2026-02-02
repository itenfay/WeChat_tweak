//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LayerBtnInfo, NSData, NSString;

@interface LayerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int isShowLayerBtn; // @dynamic isShowLayerBtn;
@property(retain, nonatomic) LayerBtnInfo *layerBtnInfo; // @dynamic layerBtnInfo;
@property(retain, nonatomic) NSString *layerDescription; // @dynamic layerDescription;
@property(retain, nonatomic) NSString *layerLogo; // @dynamic layerLogo;
@property(retain, nonatomic) NSString *layerName; // @dynamic layerName;
@property(retain, nonatomic) NSString *layerTitle; // @dynamic layerTitle;
@property(retain, nonatomic) NSString *layerType; // @dynamic layerType;
@property(retain, nonatomic) NSData *voiceData; // @dynamic voiceData;
@property(retain, nonatomic) NSData *voiceUrl; // @dynamic voiceUrl;

@end

