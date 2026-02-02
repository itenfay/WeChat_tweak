//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, SugResult_ClientControlInfo;

@interface SugResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SugResult_ClientControlInfo *clientCtrlInfo; // @dynamic clientCtrlInfo;
@property(retain, nonatomic) NSString *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;

@end

