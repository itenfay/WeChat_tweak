//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddMsg, BaseResponse, BusinessInfo, NSMutableArray, NSString;

@interface GetFuncMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionTime; // @dynamic actionTime;
@property(retain, nonatomic) AddMsg *addMsg; // @dynamic addMsg;
@property(retain, nonatomic) NSMutableArray *addMsgs; // @dynamic addMsgs;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BusinessInfo *businessInfo; // @dynamic businessInfo;
@property(retain, nonatomic) NSString *customBuff; // @dynamic customBuff;
@property(nonatomic) int opCode; // @dynamic opCode;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

