//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetEmotionWordListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *personalWords; // @dynamic personalWords;
@property(nonatomic) unsigned int personalWordsType; // @dynamic personalWordsType;
@property(nonatomic) unsigned long long personalWordsVersion; // @dynamic personalWordsVersion;

@end

