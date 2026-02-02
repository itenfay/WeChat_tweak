//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AAPayer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *payReason; // @dynamic payReason;
@property(nonatomic) unsigned int payState; // @dynamic payState;
@property(retain, nonatomic) NSString *payerUsername; // @dynamic payerUsername;
@property(nonatomic) unsigned long long refundAmount; // @dynamic refundAmount;
@property(retain, nonatomic) NSString *solitaireContent; // @dynamic solitaireContent;
@property(nonatomic) unsigned long long totalPayAmount; // @dynamic totalPayAmount;

@end

