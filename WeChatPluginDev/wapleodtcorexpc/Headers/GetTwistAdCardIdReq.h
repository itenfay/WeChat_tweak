//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetTwistAdCardIdReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *canvasId; // @dynamic canvasId;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *pageId; // @dynamic pageId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *snsId; // @dynamic snsId;
@property(retain, nonatomic) NSString *uxInfo; // @dynamic uxInfo;

@end

