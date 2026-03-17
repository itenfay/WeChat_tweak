//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderSearchGetHotWordListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *boxTitle; // @dynamic boxTitle;
@property(retain, nonatomic) NSMutableArray *hotWord; // @dynamic hotWord;
@property(retain, nonatomic) NSData *hotwordLastBuff; // @dynamic hotwordLastBuff;

@end

