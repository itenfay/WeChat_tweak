//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetQywxQRCodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backup; // @dynamic backup;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *componentId; // @dynamic componentId;
@property(retain, nonatomic) NSString *poi; // @dynamic poi;
@property(retain, nonatomic) NSString *qrExtInfo; // @dynamic qrExtInfo;
@property(retain, nonatomic) NSString *snsAid; // @dynamic snsAid;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

