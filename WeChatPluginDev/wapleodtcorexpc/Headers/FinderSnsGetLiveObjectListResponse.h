//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderSnsGetLiveObjectListLayoutInfo, NSData, NSMutableArray;

@interface FinderSnsGetLiveObjectListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *divider; // @dynamic divider;
@property(nonatomic) _Bool enableSetting; // @dynamic enableSetting;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderSnsGetLiveObjectListLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(retain, nonatomic) NSMutableArray *liveObject; // @dynamic liveObject;

@end

