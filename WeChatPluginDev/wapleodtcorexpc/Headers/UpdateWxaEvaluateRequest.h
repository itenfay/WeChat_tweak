//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, UpdateWxaEvaluateRequest_EvaluateInfo;

@interface UpdateWxaEvaluateRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) UpdateWxaEvaluateRequest_EvaluateInfo *evaluateInfo; // @dynamic evaluateInfo;
@property(nonatomic) int operType; // @dynamic operType;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

