//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveAnchorCustomGiftInfo, NSMutableArray;

@interface FinderLiveGetCustomGiftListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchorCustomGiftList; // @dynamic anchorCustomGiftList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *fanclubCustomGiftList; // @dynamic fanclubCustomGiftList;
@property(retain, nonatomic) FinderLiveAnchorCustomGiftInfo *fanclubSetting; // @dynamic fanclubSetting;

@end

