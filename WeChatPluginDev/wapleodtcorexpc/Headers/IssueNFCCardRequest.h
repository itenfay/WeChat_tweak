//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface IssueNFCCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) NSMutableArray *certificates; // @dynamic certificates;
@property(retain, nonatomic) NSString *nonce; // @dynamic nonce;
@property(retain, nonatomic) NSString *outOrderNo; // @dynamic outOrderNo;
@property(retain, nonatomic) NSString *signNonce; // @dynamic signNonce;

@end

