//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface PatternLockInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int lockStatus; // @dynamic lockStatus;
@property(nonatomic) unsigned int patternVersion; // @dynamic patternVersion;
@property(retain, nonatomic) SKBuiltinBuffer_t *sign; // @dynamic sign;

@end

