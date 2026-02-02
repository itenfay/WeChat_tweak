//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LocalSearchDict, NetworkDict;

@interface LocalSearchDictResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LocalSearchDict *dict; // @dynamic dict;
@property(retain, nonatomic) NetworkDict *networkDict; // @dynamic networkDict;
@property(nonatomic) unsigned int secondBoxHeight; // @dynamic secondBoxHeight;
@property(nonatomic) unsigned int timevalSec; // @dynamic timevalSec;

@end

