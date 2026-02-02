//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CdnInfo, NSData, NetworkSectResp;

@interface GetBioConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long bioId; // @dynamic bioId;
@property(retain, nonatomic) CdnInfo *cdnInfo; // @dynamic cdnInfo;
@property(retain, nonatomic) NSData *cfgbuffer; // @dynamic cfgbuffer;
@property(nonatomic) float faceRatio; // @dynamic faceRatio;
@property(retain, nonatomic) NSData *liveSelectData; // @dynamic liveSelectData;
@property(retain, nonatomic) NetworkSectResp *netWork; // @dynamic netWork;

@end

