//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderNpsSurveyQuestion : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *answers; // @dynamic answers;
@property(nonatomic) unsigned long long questionId; // @dynamic questionId;
@property(retain, nonatomic) NSString *questionTitle; // @dynamic questionTitle;
@property(nonatomic) unsigned int questionType; // @dynamic questionType;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

