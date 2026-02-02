//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusExtraInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundId; // @dynamic backgroundId;
@property(nonatomic) float contentScore; // @dynamic contentScore;
@property(retain, nonatomic) NSMutableArray *iconActions; // @dynamic iconActions;
@property(nonatomic) long long modifyTimeMs; // @dynamic modifyTimeMs;
@property(nonatomic) long long serverCreateTimeMs; // @dynamic serverCreateTimeMs;

@end

