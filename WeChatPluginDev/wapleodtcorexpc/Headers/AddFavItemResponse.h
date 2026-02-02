//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse;

@interface AddFavItemResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int favId; // @dynamic favId;
@property(nonatomic) unsigned int updateSeq; // @dynamic updateSeq;
@property(nonatomic) unsigned long long usedSize; // @dynamic usedSize;

@end

