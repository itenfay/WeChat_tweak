//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetAdRedpktReceiveUriReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long canvasId; // @dynamic canvasId;
@property(retain, nonatomic) NSString *combineReceiveUri; // @dynamic combineReceiveUri;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned long long pageId; // @dynamic pageId;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;
@property(nonatomic) unsigned long long twistId; // @dynamic twistId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

