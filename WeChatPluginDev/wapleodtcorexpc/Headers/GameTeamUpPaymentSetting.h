//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface GameTeamUpPaymentSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *defaultPaymentList; // @dynamic defaultPaymentList;
@property(nonatomic) unsigned int maximumPayment; // @dynamic maximumPayment;
@property(nonatomic) unsigned int settedPayment; // @dynamic settedPayment;

@end

