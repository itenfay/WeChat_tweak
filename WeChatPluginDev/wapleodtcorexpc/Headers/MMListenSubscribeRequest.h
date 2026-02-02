//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenReportClientInfo, NSString;

@interface MMListenSubscribeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) _Bool isCancel; // @dynamic isCancel;
@property(retain, nonatomic) MMListenReportClientInfo *reportClientInfo; // @dynamic reportClientInfo;

@end

