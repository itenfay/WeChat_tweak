//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface PurchaseMicAudience : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *consultationContent; // @dynamic consultationContent;
@property(nonatomic) _Bool isOnline; // @dynamic isOnline;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) unsigned int micType; // @dynamic micType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int totalAmountWecoin; // @dynamic totalAmountWecoin;

@end

