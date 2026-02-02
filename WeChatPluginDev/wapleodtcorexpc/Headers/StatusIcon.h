//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusIcon : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actions; // @dynamic actions;
@property(nonatomic) int characterSetType; // @dynamic characterSetType;
@property(nonatomic) long long flag; // @dynamic flag;
@property(retain, nonatomic) NSString *iconId; // @dynamic iconId;
@property(nonatomic) int showType; // @dynamic showType;

@end

