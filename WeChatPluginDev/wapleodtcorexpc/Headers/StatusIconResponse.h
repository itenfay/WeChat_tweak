//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusIconResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) NSMutableArray *icons; // @dynamic icons;
@property(nonatomic) _Bool result; // @dynamic result;

@end

