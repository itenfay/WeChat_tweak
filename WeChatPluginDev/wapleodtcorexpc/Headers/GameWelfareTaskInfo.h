//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameWelfareImgInfo, NSData, NSString;

@interface GameWelfareTaskInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int degreeOfCompletion; // @dynamic degreeOfCompletion;
@property(retain, nonatomic) NSData *reportExtInfo; // @dynamic reportExtInfo;
@property(nonatomic) _Bool showDegreeOfCompletion; // @dynamic showDegreeOfCompletion;
@property(nonatomic) unsigned int taskCompleted; // @dynamic taskCompleted;
@property(retain, nonatomic) NSString *taskDesc; // @dynamic taskDesc;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(retain, nonatomic) GameWelfareImgInfo *taskImgInfo; // @dynamic taskImgInfo;
@property(retain, nonatomic) NSString *taskProcessColor; // @dynamic taskProcessColor;

@end

