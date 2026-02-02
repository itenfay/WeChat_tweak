//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveAnchorCustomGiftInfo, NSMutableArray;

@interface FinderLiveFanClubGetCustomGiftListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAnchorCustomGiftInfo *anchorSetting; // @dynamic anchorSetting;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *customGifts; // @dynamic customGifts;

@end

