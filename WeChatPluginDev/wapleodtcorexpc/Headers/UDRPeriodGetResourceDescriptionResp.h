//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, UDRPeriodUpdateSetting, UDRPeriodUpdateSplitInfo;

@interface UDRPeriodGetResourceDescriptionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) UDRPeriodUpdateSetting *periodUpdateSetting; // @dynamic periodUpdateSetting;
@property(retain, nonatomic) NSMutableArray *respProjectItems; // @dynamic respProjectItems;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) UDRPeriodUpdateSplitInfo *splitInfo; // @dynamic splitInfo;

@end

