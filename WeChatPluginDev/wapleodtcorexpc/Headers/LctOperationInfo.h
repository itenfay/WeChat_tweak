//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class LctOperationShowInfoWithProduct, NewDocumentItem;

@class WXPBGeneratedMessage;

@interface LctOperationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewDocumentItem *docItem; // @dynamic docItem;
@property(nonatomic) unsigned int operationType; // @dynamic operationType;
@property(nonatomic) unsigned int showEntry; // @dynamic showEntry;
@property(retain, nonatomic) LctOperationShowInfoWithProduct *showInfoWithProduct; // @dynamic showInfoWithProduct;

@end

