//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, GOGMulMediaInfo, NSMutableArray;

@interface GOGMulMediaReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *extNew; // @dynamic extNew;
@property(nonatomic) unsigned long long fromUin; // @dynamic fromUin;
@property(retain, nonatomic) GOGMulMediaInfo *media; // @dynamic media;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

