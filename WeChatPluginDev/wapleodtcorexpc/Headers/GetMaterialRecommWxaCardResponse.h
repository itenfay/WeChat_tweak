//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetMaterialRecommWxaCardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(retain, nonatomic) NSMutableArray *recentlyUsedCardList; // @dynamic recentlyUsedCardList;
@property(retain, nonatomic) NSMutableArray *recommCardList; // @dynamic recommCardList;

@end

