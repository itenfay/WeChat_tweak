//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderGetLikedListResponse, FinderPoiInteractionInfo, InteractionData, MemberQAUserPagePreviewData, NSMutableArray;

@interface FinderUserPagePreviewResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int forbiddenFlag; // @dynamic forbiddenFlag;
@property(retain, nonatomic) InteractionData *interactionData; // @dynamic interactionData;
@property(retain, nonatomic) NSMutableArray *item; // @dynamic item;
@property(retain, nonatomic) MemberQAUserPagePreviewData *memberQaData; // @dynamic memberQaData;
@property(nonatomic) unsigned int nextDuration; // @dynamic nextDuration;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo; // @dynamic poiInteractionInfo;
@property(retain, nonatomic) FinderGetLikedListResponse *recentLikedListResp; // @dynamic recentLikedListResp;
@property(nonatomic) unsigned int showRecentLikedListEntrance; // @dynamic showRecentLikedListEntrance;

@end

