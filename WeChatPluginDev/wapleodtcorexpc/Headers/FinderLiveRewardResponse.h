//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveErrorPage, FinderLiveGiftAttackCtx, FinderLiveGiftRandomCtx, FinderLivePkValueExtraCtx, NSData, NSString;

@interface FinderLiveRewardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveGiftAttackCtx *attackCtx; // @dynamic attackCtx;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @dynamic errorPage;
@property(retain, nonatomic) FinderLivePkValueExtraCtx *extraCtx; // @dynamic extraCtx;
@property(retain, nonatomic) FinderLiveGiftRandomCtx *randomCtx; // @dynamic randomCtx;
@property(retain, nonatomic) NSData *respBuff; // @dynamic respBuff;

@end

