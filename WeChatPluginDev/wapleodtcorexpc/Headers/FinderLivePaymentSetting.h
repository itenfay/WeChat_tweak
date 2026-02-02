//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderLivePaymentSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int chargeIsMemberFree; // @dynamic chargeIsMemberFree;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @dynamic chargeUnitPriceInWecoin;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList; // @dynamic freeOfChargeChatroomIdList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomNameList; // @dynamic freeOfChargeChatroomNameList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeFileIdList; // @dynamic freeOfChargeFileIdList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeUsernameList; // @dynamic freeOfChargeUsernameList;
@property(nonatomic) unsigned int sessionSelectFromAssistant; // @dynamic sessionSelectFromAssistant;

@end

