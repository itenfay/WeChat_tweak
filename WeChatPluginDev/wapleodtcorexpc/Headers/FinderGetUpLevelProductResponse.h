//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderGetUpLevelProductResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long consumedWecoinAmount; // @dynamic consumedWecoinAmount;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(retain, nonatomic) NSMutableArray *levelConfigList; // @dynamic levelConfigList;
@property(nonatomic) unsigned long long limitChooseProduct; // @dynamic limitChooseProduct;
@property(nonatomic) unsigned long long limitConsumeWecoin; // @dynamic limitConsumeWecoin;
@property(retain, nonatomic) NSMutableArray *productMetaList; // @dynamic productMetaList;

@end

