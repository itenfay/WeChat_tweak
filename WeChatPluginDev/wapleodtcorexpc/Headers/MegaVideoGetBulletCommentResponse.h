//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MegaVideoGetBulletCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(nonatomic) unsigned long long commentTimestampMax; // @dynamic commentTimestampMax;
@property(nonatomic) unsigned long long commentTimestampMin; // @dynamic commentTimestampMin;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end

