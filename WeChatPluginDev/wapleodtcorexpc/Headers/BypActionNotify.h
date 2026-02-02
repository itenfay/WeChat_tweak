//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface BypActionNotify : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *onlyNotifyMsgs; // @dynamic onlyNotifyMsgs;
@property(retain, nonatomic) NSMutableArray *selector; // @dynamic selector;
@property(nonatomic) _Bool syncAllSelector; // @dynamic syncAllSelector;
@property(retain, nonatomic) NSMutableArray *syncItemList; // @dynamic syncItemList;

@end

