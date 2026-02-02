//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface SnsObjectOpResponse : WXPBGeneratedMessage
{
    int opRetListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int opCount; // @dynamic opCount;
@property(retain, nonatomic) NSMutableArray *opRetList; // @dynamic opRetList;
@property(nonatomic) unsigned int updateYearMonthInfo; // @dynamic updateYearMonthInfo;
@property(nonatomic) unsigned int yearMonthInfoCount; // @dynamic yearMonthInfoCount;
@property(retain, nonatomic) NSMutableArray *yearMonthInfoList; // @dynamic yearMonthInfoList;

@end

