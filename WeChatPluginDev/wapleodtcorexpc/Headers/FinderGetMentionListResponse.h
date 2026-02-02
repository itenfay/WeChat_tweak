//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderMentionList, MentionListLastReadInfo, NSData, ThankRedPackageInfo;

@interface FinderGetMentionListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(retain, nonatomic) MentionListLastReadInfo *lastReadInfo; // @dynamic lastReadInfo;
@property(retain, nonatomic) FinderMentionList *list; // @dynamic list;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(retain, nonatomic) ThankRedPackageInfo *redpackageInfo; // @dynamic redpackageInfo;

@end

