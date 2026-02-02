//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, UDRListValue;

@interface UDRValue : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) double doubleValue; // @dynamic doubleValue;
@property(nonatomic) int int32Value; // @dynamic int32Value;
@property(nonatomic) long long int64Value; // @dynamic int64Value;
@property(retain, nonatomic) UDRListValue *listValue; // @dynamic listValue;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(nonatomic) unsigned int uint32Value; // @dynamic uint32Value;
@property(nonatomic) unsigned long long uint64Value; // @dynamic uint64Value;

@end

