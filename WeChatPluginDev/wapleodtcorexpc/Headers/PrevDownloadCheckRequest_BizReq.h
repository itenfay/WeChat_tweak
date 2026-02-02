//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface PrevDownloadCheckRequest_BizReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bizId; // @dynamic bizId;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned long long prevUsedQuota; // @dynamic prevUsedQuota;
@property(retain, nonatomic) NSMutableArray *quotaAsks; // @dynamic quotaAsks;

@end

