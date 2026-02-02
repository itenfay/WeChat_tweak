//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderContact, FinderLiveContact, NSString;

@class WXPBGeneratedMessage;

@interface FinderPersonalMsgContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSString *liveAlias; // @dynamic liveAlias;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @dynamic liveContact;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @dynamic rewardTotalAmountInWecoin;

@end

