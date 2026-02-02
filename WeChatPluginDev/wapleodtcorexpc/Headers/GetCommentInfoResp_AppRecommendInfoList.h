//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GetCommentInfoResp_TagSummary, NSMutableArray;

@interface GetCommentInfoResp_AppRecommendInfoList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long dataVersion; // @dynamic dataVersion;
@property(retain, nonatomic) NSMutableArray *info; // @dynamic info;
@property(retain, nonatomic) GetCommentInfoResp_TagSummary *tagSummary; // @dynamic tagSummary;

@end

