//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpInfo, NSMutableArray;

@interface FinderLiveAnchorGetPromoteInfoListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *availableItems; // @dynamic availableItems;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *promoteInfoList; // @dynamic promoteInfoList;
@property(retain, nonatomic) FinderJumpInfo *promotionJumpInfo; // @dynamic promotionJumpInfo;
@property(nonatomic) unsigned int promotionValidTime; // @dynamic promotionValidTime;

@end

