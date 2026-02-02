//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class ExposureSilent;

@class WXPBGeneratedMessage;

@interface MessageExposureStrategyControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clickCooldownSecond; // @dynamic clickCooldownSecond;
@property(nonatomic) unsigned int exposureCooldownSecond; // @dynamic exposureCooldownSecond;
@property(nonatomic) unsigned int exposureIntervalSecond; // @dynamic exposureIntervalSecond;
@property(retain, nonatomic) ExposureSilent *exposureSilentConf; // @dynamic exposureSilentConf;
@property(nonatomic) unsigned int userExposureLimit; // @dynamic userExposureLimit;

@end

