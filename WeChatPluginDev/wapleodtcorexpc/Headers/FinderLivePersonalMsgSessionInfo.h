//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderLiveContact, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLivePersonalMsgSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *anchorContact; // @dynamic anchorContact;
@property(retain, nonatomic) NSMutableArray *assistantContact; // @dynamic assistantContact;
@property(nonatomic) unsigned int assistantIndex; // @dynamic assistantIndex;
@property(retain, nonatomic) FinderLiveContact *audienceContact; // @dynamic audienceContact;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int roleType; // @dynamic roleType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

