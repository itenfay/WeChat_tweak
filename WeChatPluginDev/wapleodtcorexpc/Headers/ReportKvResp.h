//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class StrategyTable;

@interface ReportKvResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int banreporttime; // @dynamic banreporttime;
@property(retain, nonatomic) StrategyTable *clistgtable; // @dynamic clistgtable;
@property(nonatomic) unsigned int clistgver; // @dynamic clistgver;
@property(nonatomic) unsigned int datavalidtime; // @dynamic datavalidtime;
@property(retain, nonatomic) StrategyTable *genstgtable; // @dynamic genstgtable;
@property(nonatomic) unsigned int genstgver; // @dynamic genstgver;
@property(nonatomic) unsigned int pollingtime; // @dynamic pollingtime;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) StrategyTable *uinstgtable; // @dynamic uinstgtable;
@property(nonatomic) unsigned int uinstgver; // @dynamic uinstgver;

@end

