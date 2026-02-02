//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetWxaAppNearbyResponse_NearbyWxaAppInfo, NSMutableArray, NSString, WxaAppBaseResponse;

@interface GetWxaAppNearbyResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appCount; // @dynamic appCount;
@property(retain, nonatomic) NSMutableArray *appList; // @dynamic appList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *detailNearbyAppLink; // @dynamic detailNearbyAppLink;
@property(nonatomic) unsigned int disappearOneClick; // @dynamic disappearOneClick;
@property(nonatomic) unsigned int displayStrategyId; // @dynamic displayStrategyId;
@property(nonatomic) unsigned int linkLifespan; // @dynamic linkLifespan;
@property(retain, nonatomic) GetWxaAppNearbyResponse_NearbyWxaAppInfo *nearbyEntry; // @dynamic nearbyEntry;
@property(retain, nonatomic) NSString *nearbyListId; // @dynamic nearbyListId;
@property(retain, nonatomic) NSString *noticeBgColor; // @dynamic noticeBgColor;
@property(retain, nonatomic) NSString *noticeWording; // @dynamic noticeWording;
@property(nonatomic) unsigned int openThreshold; // @dynamic openThreshold;
@property(nonatomic) unsigned int openWxa; // @dynamic openWxa;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;
@property(retain, nonatomic) NSString *wordingColor; // @dynamic wordingColor;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

