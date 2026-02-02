//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MicSetting_PurchaseMicSetting, NSString;

@interface MicSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adjustLayoutTopMicSdkUserId; // @dynamic adjustLayoutTopMicSdkUserId;
@property(nonatomic) _Bool highlightMicPerson; // @dynamic highlightMicPerson;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting; // @dynamic purchaseMicSetting;
@property(nonatomic) unsigned long long settingFlag; // @dynamic settingFlag;
@property(nonatomic) unsigned long long settingSwitchFlag; // @dynamic settingSwitchFlag;

@end

