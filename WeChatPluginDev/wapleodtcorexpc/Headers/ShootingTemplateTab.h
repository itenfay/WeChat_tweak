//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ShootingTemplateTab : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long tabId; // @dynamic tabId;
@property(retain, nonatomic) NSString *tabName; // @dynamic tabName;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;
@property(retain, nonatomic) NSMutableArray *tags; // @dynamic tags;

@end

