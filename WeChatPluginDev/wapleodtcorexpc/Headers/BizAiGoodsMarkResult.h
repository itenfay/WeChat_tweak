//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAiGoodsMarkInfo, NSMutableArray, NSString;

@interface BizAiGoodsMarkResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *categoryImageUrl; // @dynamic categoryImageUrl;
@property(retain, nonatomic) NSString *categoryTitle; // @dynamic categoryTitle;
@property(retain, nonatomic) BizAiGoodsMarkInfo *markInfo; // @dynamic markInfo;
@property(retain, nonatomic) NSMutableArray *markInfos; // @dynamic markInfos;

@end

