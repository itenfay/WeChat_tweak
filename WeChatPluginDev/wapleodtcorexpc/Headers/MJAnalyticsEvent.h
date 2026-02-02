//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MJAnalyticsEvent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(retain, nonatomic) NSMutableArray *expands; // @dynamic expands;
@property(retain, nonatomic) NSMutableArray *keys; // @dynamic keys;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) NSMutableArray *values; // @dynamic values;

@end

