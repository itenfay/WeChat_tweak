//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenCategoryItem, MMListenItem;

@interface MMListenVoiceSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(nonatomic) int type; // @dynamic type;

@end

