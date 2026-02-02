//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GuideCellItem, LqtDialog, NSString, NewDocumentItem;

@interface QryPurchaseResultRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *confirmResultWording; // @dynamic confirmResultWording;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) GuideCellItem *guideCell; // @dynamic guideCell;
@property(retain, nonatomic) NewDocumentItem *operationView; // @dynamic operationView;
@property(retain, nonatomic) NSString *profitDate; // @dynamic profitDate;
@property(retain, nonatomic) NSString *purchaseResultWording; // @dynamic purchaseResultWording;
@property(nonatomic) unsigned int purchaseState; // @dynamic purchaseState;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *upgradeWording; // @dynamic upgradeWording;

@end

