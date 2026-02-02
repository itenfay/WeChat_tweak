//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *commentId; // @dynamic commentId;
@property(nonatomic) int commentType; // @dynamic commentType;
@property(nonatomic) int countLimit; // @dynamic countLimit;
@property(retain, nonatomic) NSMutableArray *dbState; // @dynamic dbState;
@property(retain, nonatomic) NSString *exceptUserName; // @dynamic exceptUserName;
@property(nonatomic) int notifyType; // @dynamic notifyType;
@property(nonatomic) int readType; // @dynamic readType;
@property(retain, nonatomic) NSString *statusId; // @dynamic statusId;
@property(nonatomic) long long timeLimitMs; // @dynamic timeLimitMs;
@property(nonatomic) long long timeMaxMs; // @dynamic timeMaxMs;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

