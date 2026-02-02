//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderNpsSurveyTaskConf : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isRelativeIndexInFeedPositonList:(unsigned long long)arg1;
- (_Bool)canBeTriggeredByEvent:(unsigned int)arg1 contextInfo:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool allFeedPos; // @dynamic allFeedPos;
@property(nonatomic) float autoDisappearTime; // @dynamic autoDisappearTime;
@property(nonatomic) unsigned int conditions; // @dynamic conditions;
@property(nonatomic) float delayAppearTime; // @dynamic delayAppearTime;
@property(nonatomic) unsigned int deliverScenes; // @dynamic deliverScenes;
@property(nonatomic) unsigned int excludeDays; // @dynamic excludeDays;
@property(nonatomic) unsigned long long expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned long long feedMediaTypes; // @dynamic feedMediaTypes;
@property(retain, nonatomic) NSMutableArray *feedPos; // @dynamic feedPos;
@property(nonatomic) unsigned int instExposeLimit; // @dynamic instExposeLimit;
@property(retain, nonatomic) NSString *instanceId; // @dynamic instanceId;
@property(nonatomic) _Bool isPreview; // @dynamic isPreview;
@property(nonatomic) unsigned int showPosType; // @dynamic showPosType;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long taskId; // @dynamic taskId;

@end

