//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DelayInfo, Preload, QuestionBar, RepeatUrl, SocialInfluenceInfo;

@interface SnsOperations : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) QuestionBar *bar; // @dynamic bar;
@property(retain, nonatomic) DelayInfo *delayinfo; // @dynamic delayinfo;
@property(retain, nonatomic) Preload *preload; // @dynamic preload;
@property(retain, nonatomic) RepeatUrl *repeaturl; // @dynamic repeaturl;
@property(nonatomic) unsigned int snsOperationsFlag; // @dynamic snsOperationsFlag;
@property(retain, nonatomic) SocialInfluenceInfo *socialInfluenceInfo; // @dynamic socialInfluenceInfo;

@end

