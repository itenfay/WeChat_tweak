//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class TingUserLocalFeature, TingUserRemoteFeature;

@class WXPBGeneratedMessage;

@interface TingUserFeature : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TingUserLocalFeature *localFeature; // @dynamic localFeature;
@property(retain, nonatomic) TingUserRemoteFeature *remoteFeature; // @dynamic remoteFeature;

@end

