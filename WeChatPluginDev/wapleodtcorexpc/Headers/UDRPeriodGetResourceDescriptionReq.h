//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface UDRPeriodGetResourceDescriptionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appParameters; // @dynamic appParameters;
@property(retain, nonatomic) NSData *lastOffset; // @dynamic lastOffset;
@property(retain, nonatomic) NSMutableArray *reqItems; // @dynamic reqItems;

@end

