//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SearchRecommendFlowResp_FinderInfo, SearchRecommendFlowResp_LiteAppInfo;

@interface SearchRecommendFlowResp_SearchRecommendItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) SearchRecommendFlowResp_FinderInfo *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(retain, nonatomic) SearchRecommendFlowResp_LiteAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) NSString *tailText; // @dynamic tailText;
@property(retain, nonatomic) NSString *topText; // @dynamic topText;

@end

