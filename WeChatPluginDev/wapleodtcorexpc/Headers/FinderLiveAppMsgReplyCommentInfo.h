//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPostLiveMsgReportInfo, NSString;

@interface FinderLiveAppMsgReplyCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool needStick; // @dynamic needStick;
@property(retain, nonatomic) NSString *referProductQuestionCardId; // @dynamic referProductQuestionCardId;
@property(retain, nonatomic) FinderPostLiveMsgReportInfo *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int stickType; // @dynamic stickType;

@end

