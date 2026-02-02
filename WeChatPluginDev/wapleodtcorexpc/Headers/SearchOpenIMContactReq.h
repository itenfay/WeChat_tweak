//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, OpenIMFinderInfo, SearchContactContext;

@interface SearchOpenIMContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(retain, nonatomic) OpenIMFinderInfo *openimFinderInfo; // @dynamic openimFinderInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) SearchContactContext *searchContactContext; // @dynamic searchContactContext;
@property(retain, nonatomic) NSData *spamContext; // @dynamic spamContext;
@property(retain, nonatomic) NSString *tpMultiUserQrcode; // @dynamic tpMultiUserQrcode;
@property(retain, nonatomic) NSString *tpQrcode; // @dynamic tpQrcode;
@property(nonatomic) unsigned int tpType; // @dynamic tpType;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

