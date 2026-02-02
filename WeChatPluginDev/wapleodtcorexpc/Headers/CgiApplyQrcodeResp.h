//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, QRButtonInfo;

@interface CgiApplyQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool enableUserInput; // @dynamic enableUserInput;
@property(retain, nonatomic) QRButtonInfo *firstButton; // @dynamic firstButton;
@property(retain, nonatomic) QRButtonInfo *secondButton; // @dynamic secondButton;
@property(retain, nonatomic) NSString *titleInfo; // @dynamic titleInfo;
@property(retain, nonatomic) NSMutableArray *usage; // @dynamic usage;

@end

