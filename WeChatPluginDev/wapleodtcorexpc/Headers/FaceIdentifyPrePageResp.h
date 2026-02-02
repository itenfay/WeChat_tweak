//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PromptButton;

@interface FaceIdentifyPrePageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bizHeadUrl; // @dynamic bizHeadUrl;
@property(retain, nonatomic) NSString *bizNickName; // @dynamic bizNickName;
@property(retain, nonatomic) NSString *businessTips; // @dynamic businessTips;
@property(retain, nonatomic) NSString *businessTipsColor; // @dynamic businessTipsColor;
@property(nonatomic) unsigned int checkAliveType; // @dynamic checkAliveType;
@property(retain, nonatomic) NSString *complainUrl; // @dynamic complainUrl;
@property(retain, nonatomic) NSString *errTips; // @dynamic errTips;
@property(nonatomic) float faceFrameRatio; // @dynamic faceFrameRatio;
@property(retain, nonatomic) NSString *feedbackUrl; // @dynamic feedbackUrl;
@property(retain, nonatomic) NSString *headerPromptWording; // @dynamic headerPromptWording;
@property(retain, nonatomic) NSString *identifyId; // @dynamic identifyId;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(nonatomic) float lightThreshold; // @dynamic lightThreshold;
@property(retain, nonatomic) PromptButton *prompt; // @dynamic prompt;
@property(retain, nonatomic) NSString *sdkSetting; // @dynamic sdkSetting;
@property(retain, nonatomic) NSString *sgHeaderWording; // @dynamic sgHeaderWording;
@property(retain, nonatomic) PromptButton *sgPrompt; // @dynamic sgPrompt;

@end

