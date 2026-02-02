//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class StrategyTable;

@interface IdKeyGetStrategyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StrategyTable *clistgtable; // @dynamic clistgtable;
@property(nonatomic) unsigned int clistgver; // @dynamic clistgver;
@property(nonatomic) unsigned int datavalidtime; // @dynamic datavalidtime;
@property(retain, nonatomic) StrategyTable *genstgtable; // @dynamic genstgtable;
@property(nonatomic) unsigned int genstgver; // @dynamic genstgver;
@property(nonatomic) unsigned int pollingtime; // @dynamic pollingtime;
@property(nonatomic) int ret; // @dynamic ret;

@end

