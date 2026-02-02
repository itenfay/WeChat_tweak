//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveNoticeInfo, NSString;

@interface FinderCreateLiveNoticeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;

@end

