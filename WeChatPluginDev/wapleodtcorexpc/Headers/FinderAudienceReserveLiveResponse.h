//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderAudienceReserveLiveResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *failNoticeIdList; // @dynamic failNoticeIdList;
@property(retain, nonatomic) NSMutableArray *succNoticeIdList; // @dynamic succNoticeIdList;
@property(retain, nonatomic) NSMutableArray *succNoticeInfoList; // @dynamic succNoticeInfoList;

@end

