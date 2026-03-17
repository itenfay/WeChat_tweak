//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AlertDialog, BaseResponse, BubbleMsg, NSString;

@class WXPBGeneratedMessage;

@interface RealNameVerifyGuardianResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AlertDialog *alertDialog; // @dynamic alertDialog;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BubbleMsg *bubbleMsg; // @dynamic bubbleMsg;
@property(retain, nonatomic) NSString *leaveMessage; // @dynamic leaveMessage;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

