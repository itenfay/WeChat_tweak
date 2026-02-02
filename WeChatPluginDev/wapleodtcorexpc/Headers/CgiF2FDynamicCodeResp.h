//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CgiF2FDynamicCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSMutableArray *showItems; // @dynamic showItems;
@property(retain, nonatomic) NSString *supervisionWording; // @dynamic supervisionWording;

@end

