//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetCommentInfoResp_CommentModule, GetProfileInfoResponse_ProfilePageInfo, GetProfileInfoResponse_RelievedBuyInfo, GetProfileInfoResponse_ServicePreInfo, GetProfileInfoResponse_WxaEvaluateBasicInfo, GetProfileInfoResponse_WxaLikeList, GetProfileInfoResponse_WxaRelateBrandList, GetProfileInfoResponse_WxaRelateWeAppList, NSMutableArray, NSString;

@interface GetProfileInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetCommentInfoResp_CommentModule *commentInfo; // @dynamic commentInfo;
@property(nonatomic) unsigned int customerType; // @dynamic customerType;
@property(retain, nonatomic) GetProfileInfoResponse_WxaEvaluateBasicInfo *evaluateBasicInfo; // @dynamic evaluateBasicInfo;
@property(retain, nonatomic) GetProfileInfoResponse_WxaLikeList *friendLikeList; // @dynamic friendLikeList;
@property(retain, nonatomic) NSString *guarantUrl; // @dynamic guarantUrl;
@property(nonatomic) unsigned int nameVerify; // @dynamic nameVerify;
@property(retain, nonatomic) NSMutableArray *newRelateWeappList; // @dynamic newRelateWeappList;
@property(retain, nonatomic) NSString *officicalUrl; // @dynamic officicalUrl;
@property(retain, nonatomic) GetProfileInfoResponse_ProfilePageInfo *pageInfo; // @dynamic pageInfo;
@property(retain, nonatomic) GetProfileInfoResponse_WxaRelateBrandList *relateBrandList; // @dynamic relateBrandList;
@property(retain, nonatomic) GetProfileInfoResponse_WxaRelateWeAppList *relateWeappList; // @dynamic relateWeappList;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *relievedBuyInfo; // @dynamic relievedBuyInfo;
@property(retain, nonatomic) GetProfileInfoResponse_ServicePreInfo *servicePreInfo; // @dynamic servicePreInfo;
@property(nonatomic) unsigned int useKf; // @dynamic useKf;

@end

