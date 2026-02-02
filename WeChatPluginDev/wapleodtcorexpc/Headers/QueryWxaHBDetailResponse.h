//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface QueryWxaHBDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *amountTitle; // @dynamic amountTitle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errorwording; // @dynamic errorwording;
@property(nonatomic) int hbStatus; // @dynamic hbStatus;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(retain, nonatomic) NSString *headTitle; // @dynamic headTitle;
@property(nonatomic) int isContinue; // @dynamic isContinue;
@property(nonatomic) int isSender; // @dynamic isSender;
@property(nonatomic) unsigned long long rcvdAmount; // @dynamic rcvdAmount;
@property(nonatomic) unsigned int rcvdNum; // @dynamic rcvdNum;
@property(retain, nonatomic) NSMutableArray *rcvdUserList; // @dynamic rcvdUserList;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(retain, nonatomic) NSString *sendHeadimg; // @dynamic sendHeadimg;
@property(retain, nonatomic) NSString *sendNickname; // @dynamic sendNickname;
@property(retain, nonatomic) NSString *sendUsername; // @dynamic sendUsername;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;
@property(nonatomic) unsigned int wxahbStatus; // @dynamic wxahbStatus;

@end

