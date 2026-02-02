//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderNpsSurveyAnswer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(nonatomic) unsigned int answerIcon; // @dynamic answerIcon;
@property(nonatomic) unsigned long long answerId; // @dynamic answerId;
@property(retain, nonatomic) NSString *answerTitle; // @dynamic answerTitle;
@property(nonatomic) _Bool defaultHighlighted; // @dynamic defaultHighlighted;
@property(nonatomic) unsigned long long nextQuestionId; // @dynamic nextQuestionId;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) NSString *textPlaceholder; // @dynamic textPlaceholder;
@property(nonatomic) _Bool withInputText; // @dynamic withInputText;

@end

