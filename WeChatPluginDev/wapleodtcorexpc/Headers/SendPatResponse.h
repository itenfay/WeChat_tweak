//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface SendPatResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *patSuffix; // @dynamic patSuffix;
@property(nonatomic) unsigned int patSuffixVersion; // @dynamic patSuffixVersion;
@property(retain, nonatomic) NSString *selfMsg; // @dynamic selfMsg;
@property(retain, nonatomic) NSString *tmpl; // @dynamic tmpl;

@end

