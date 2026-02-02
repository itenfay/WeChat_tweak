//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderQuitLiveNavResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *containerList; // @dynamic containerList;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @dynamic jumpNavliveBuffer;
@property(nonatomic) unsigned int preloadIntervalSec; // @dynamic preloadIntervalSec;

@end

