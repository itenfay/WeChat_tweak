//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSMutableArray, NSString;

@interface AALaunchByPersonReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool fromGroupSolitaire; // @dynamic fromGroupSolitaire;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(nonatomic) unsigned long long operationTimestamp; // @dynamic operationTimestamp;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(retain, nonatomic) NSMutableArray *payerSolitaireInfoList; // @dynamic payerSolitaireInfoList;
@property(retain, nonatomic) NSString *pfOrderNo; // @dynamic pfOrderNo;
@property(retain, nonatomic) NSString *picCdnMd5; // @dynamic picCdnMd5;
@property(retain, nonatomic) NSString *picCdnThumbUrl; // @dynamic picCdnThumbUrl;
@property(retain, nonatomic) NSString *picCdnUrl; // @dynamic picCdnUrl;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long totalPayAmount; // @dynamic totalPayAmount;

@end

