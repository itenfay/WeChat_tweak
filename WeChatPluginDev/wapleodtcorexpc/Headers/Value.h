//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ListValue, NSString;

@interface Value : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) double doubleValue; // @dynamic doubleValue;
@property(nonatomic) long long int64Value; // @dynamic int64Value;
@property(retain, nonatomic) ListValue *listValue; // @dynamic listValue;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(nonatomic) unsigned long long uint64Value; // @dynamic uint64Value;

@end

