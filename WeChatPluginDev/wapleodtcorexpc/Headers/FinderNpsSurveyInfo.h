//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderNpsSurveyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long firstQuestionId; // @dynamic firstQuestionId;
@property(retain, nonatomic) NSMutableArray *questions; // @dynamic questions;
@property(nonatomic) unsigned long long surveyId; // @dynamic surveyId;
@property(nonatomic) unsigned long long taskId; // @dynamic taskId;

@end

