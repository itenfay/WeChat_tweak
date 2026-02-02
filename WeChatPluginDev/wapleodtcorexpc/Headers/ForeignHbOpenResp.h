//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ForeignHbCurrencyTips, ForeignHbOperationsInfo, InterceptWin, JumpRemind, NSMutableArray, NSString, RealNameInfo;

@interface ForeignHbOpenResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *amountDesc; // @dynamic amountDesc;
@property(retain, nonatomic) NSString *amountDescIcon; // @dynamic amountDescIcon;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *changeIconUrl; // @dynamic changeIconUrl;
@property(retain, nonatomic) NSString *changeUrl; // @dynamic changeUrl;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(retain, nonatomic) ForeignHbCurrencyTips *currencyTips; // @dynamic currencyTips;
@property(nonatomic) unsigned int enableAnswerByExpression; // @dynamic enableAnswerByExpression;
@property(nonatomic) unsigned int enableAnswerBySelfie; // @dynamic enableAnswerBySelfie;
@property(nonatomic) unsigned int hbStatus; // @dynamic hbStatus;
@property(nonatomic) unsigned int hbType; // @dynamic hbType;
@property(retain, nonatomic) NSString *headTitle; // @dynamic headTitle;
@property(retain, nonatomic) InterceptWin *interceptWin; // @dynamic interceptWin;
@property(nonatomic) unsigned int isContinue; // @dynamic isContinue;
@property(nonatomic) unsigned int isSender; // @dynamic isSender;
@property(nonatomic) unsigned int jumpChange; // @dynamic jumpChange;
@property(nonatomic) unsigned int jumpChangeType; // @dynamic jumpChangeType;
@property(retain, nonatomic) JumpRemind *jumpRemind; // @dynamic jumpRemind;
@property(retain, nonatomic) NSMutableArray *operationHeader; // @dynamic operationHeader;
@property(retain, nonatomic) ForeignHbOperationsInfo *operationTail; // @dynamic operationTail;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned long long recAmount; // @dynamic recAmount;
@property(nonatomic) unsigned int recNum; // @dynamic recNum;
@property(retain, nonatomic) NSString *receiveId; // @dynamic receiveId;
@property(nonatomic) unsigned int receiveStatus; // @dynamic receiveStatus;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;
@property(retain, nonatomic) NSString *sessionUserName; // @dynamic sessionUserName;
@property(retain, nonatomic) NSString *statusMess; // @dynamic statusMess;
@property(retain, nonatomic) NSString *systemMsgContext; // @dynamic systemMsgContext;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

