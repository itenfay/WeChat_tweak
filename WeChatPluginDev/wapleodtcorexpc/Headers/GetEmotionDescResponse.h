//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EmotionLinkInfo, NSMutableArray, NSString;

@interface GetEmotionDescResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int activityFlag; // @dynamic activityFlag;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buttonDesc; // @dynamic buttonDesc;
@property(nonatomic) unsigned int clickFlag; // @dynamic clickFlag;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned int downLoadFlag; // @dynamic downLoadFlag;
@property(retain, nonatomic) EmotionLinkInfo *link; // @dynamic link;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;

@end

