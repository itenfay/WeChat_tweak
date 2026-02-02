//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLbsLifeStreamTab : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int allowUnselected; // @dynamic allowUnselected;
@property(nonatomic) unsigned long long defaultSelectedTabId; // @dynamic defaultSelectedTabId;
@property(retain, nonatomic) NSMutableArray *groupList; // @dynamic groupList;
@property(nonatomic) unsigned long long tabId; // @dynamic tabId;
@property(retain, nonatomic) NSMutableArray *tabList; // @dynamic tabList;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

