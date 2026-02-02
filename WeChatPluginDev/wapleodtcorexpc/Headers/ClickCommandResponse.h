//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, WuRaoTips;

@interface ClickCommandResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSMutableArray *sysMsgTipsList; // @dynamic sysMsgTipsList;
@property(retain, nonatomic) WuRaoTips *wuRaoTips; // @dynamic wuRaoTips;

@end

