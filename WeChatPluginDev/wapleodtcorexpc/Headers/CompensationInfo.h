//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CompensationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int compensationAmount; // @dynamic compensationAmount;
@property(retain, nonatomic) NSString *compensationId; // @dynamic compensationId;
@property(nonatomic) unsigned int compensationState; // @dynamic compensationState;
@property(nonatomic) unsigned int compensationType; // @dynamic compensationType;

@end

