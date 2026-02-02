//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderGetLiveNoticeResponse_FinderLiveStatusInfo, FinderLiveNoticeInfo, FinderLiveNoticeListInfo;

@interface FinderGetLiveNoticeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *anchorContact; // @dynamic anchorContact;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(retain, nonatomic) FinderGetLiveNoticeResponse_FinderLiveStatusInfo *liveStatusInfo; // @dynamic liveStatusInfo;
@property(nonatomic) unsigned int memberStatus; // @dynamic memberStatus;

@end

