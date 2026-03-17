//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface PatternLockBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int lockstatus; // @dynamic lockstatus;
@property(retain, nonatomic) SKBuiltinBuffer_t *sign; // @dynamic sign;
@property(retain, nonatomic) SKBuiltinBuffer_t *svrpatternhash; // @dynamic svrpatternhash;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

