//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AAPayerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int paySccTime; // @dynamic paySccTime;
@property(nonatomic) int payState; // @dynamic payState;
@property(retain, nonatomic) NSString *payerUsername; // @dynamic payerUsername;
@property(nonatomic) unsigned long long totalPayAmount; // @dynamic totalPayAmount;

@end

