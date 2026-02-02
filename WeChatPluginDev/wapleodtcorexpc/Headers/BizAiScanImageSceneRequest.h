//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizAiScanImageLocation, BizAiScanImageSearchInfo, GoodsObject, NSData, NSMutableArray, NSString;

@interface BizAiScanImageSceneRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *cdnImgs; // @dynamic cdnImgs;
@property(retain, nonatomic) NSString *chatUuid; // @dynamic chatUuid;
@property(retain, nonatomic) GoodsObject *cropObj; // @dynamic cropObj;
@property(retain, nonatomic) NSString *fromUrl; // @dynamic fromUrl;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(retain, nonatomic) BizAiScanImageLocation *location; // @dynamic location;
@property(nonatomic) unsigned int mode; // @dynamic mode;
@property(retain, nonatomic) NSString *phashStr; // @dynamic phashStr;
@property(nonatomic) long long phashValue; // @dynamic phashValue;
@property(retain, nonatomic) NSString *phashVersion; // @dynamic phashVersion;
@property(retain, nonatomic) BizAiScanImageSearchInfo *searchInfo; // @dynamic searchInfo;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

