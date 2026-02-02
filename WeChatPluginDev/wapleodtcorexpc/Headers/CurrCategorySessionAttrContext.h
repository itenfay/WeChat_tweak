//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ExploreSessionsContext, NSString, SdkUIContext;

@interface CurrCategorySessionAttrContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appSessionId; // @dynamic appSessionId;
@property(nonatomic) unsigned long long appSessionStartScene; // @dynamic appSessionStartScene;
@property(retain, nonatomic) ExploreSessionsContext *bornExploreSessions; // @dynamic bornExploreSessions;
@property(nonatomic) unsigned long long categoryStartSource; // @dynamic categoryStartSource;
@property(nonatomic) unsigned long long clickId; // @dynamic clickId;
@property(retain, nonatomic) NSString *continueFromBaseListenId; // @dynamic continueFromBaseListenId;
@property(nonatomic) unsigned int currentTabIndex; // @dynamic currentTabIndex;
@property(nonatomic) unsigned int isSwitTab; // @dynamic isSwitTab;
@property(retain, nonatomic) ExploreSessionsContext *playerExploreSessions; // @dynamic playerExploreSessions;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *startLineId; // @dynamic startLineId;
@property(nonatomic) unsigned int startPlayerState; // @dynamic startPlayerState;
@property(nonatomic) unsigned long long startScene; // @dynamic startScene;
@property(retain, nonatomic) SdkUIContext *startSdkId; // @dynamic startSdkId;
@property(nonatomic) unsigned int startWxstate; // @dynamic startWxstate;
@property(nonatomic) unsigned long long subStartSource; // @dynamic subStartSource;
@property(nonatomic) unsigned int tabListIndex; // @dynamic tabListIndex;
@property(nonatomic) unsigned long long time; // @dynamic time;

@end

