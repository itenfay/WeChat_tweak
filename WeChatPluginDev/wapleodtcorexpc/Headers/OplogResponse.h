//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class OplogRet;

@class WXPBGeneratedMessage;

@interface OplogResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) OplogRet *oplogRet; // @dynamic oplogRet;
@property(nonatomic) int ret; // @dynamic ret;

@end

