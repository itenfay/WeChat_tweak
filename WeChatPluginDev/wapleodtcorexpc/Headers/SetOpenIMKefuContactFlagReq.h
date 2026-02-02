//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SetOpenIMKefuContactFlagReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long flagMask; // @dynamic flagMask;
@property(nonatomic) unsigned long long flagValue; // @dynamic flagValue;
@property(retain, nonatomic) NSString *kfUsername; // @dynamic kfUsername;

@end

