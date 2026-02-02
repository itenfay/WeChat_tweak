//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderLiveRewardPrepareResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *ctxBuf; // @dynamic ctxBuf;
@property(retain, nonatomic) NSMutableArray *ctxBufInfos; // @dynamic ctxBufInfos;
@property(retain, nonatomic) NSData *prepareBuf; // @dynamic prepareBuf;
@property(retain, nonatomic) NSMutableArray *prepareBufInfos; // @dynamic prepareBufInfos;

@end

