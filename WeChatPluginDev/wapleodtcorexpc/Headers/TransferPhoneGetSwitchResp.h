//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ComplianceItem, NSString;

@interface TransferPhoneGetSwitchResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ComplianceItem *complianceItem; // @dynamic complianceItem;
@property(retain, nonatomic) NSString *entranceName; // @dynamic entranceName;
@property(nonatomic) _Bool isNewUser; // @dynamic isNewUser;
@property(nonatomic) _Bool isOpen; // @dynamic isOpen;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

