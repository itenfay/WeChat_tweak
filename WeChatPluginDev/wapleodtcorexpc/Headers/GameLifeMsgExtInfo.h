//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MsgReport;

@interface GameLifeMsgExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long disabledAppPanelIdFlag; // @dynamic disabledAppPanelIdFlag;
@property(nonatomic) unsigned long long disabledStaticPanelIdFlag; // @dynamic disabledStaticPanelIdFlag;
@property(retain, nonatomic) MsgReport *msgReport; // @dynamic msgReport;

@end

