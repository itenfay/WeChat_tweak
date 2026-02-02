//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData;

@interface CheckShortLinkResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *pageTitle; // @dynamic pageTitle;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;
@property(retain, nonatomic) NSData *wxaAppid; // @dynamic wxaAppid;
@property(retain, nonatomic) NSData *wxaNickName; // @dynamic wxaNickName;
@property(retain, nonatomic) NSData *wxaPath; // @dynamic wxaPath;

@end

