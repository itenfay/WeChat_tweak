//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetAssociateChatRoomManageInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindTpUsername; // @dynamic bindTpUsername;
@property(retain, nonatomic) NSString *intro; // @dynamic intro;
@property(retain, nonatomic) NSMutableArray *noticeList; // @dynamic noticeList;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

