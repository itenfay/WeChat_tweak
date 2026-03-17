//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderPrivacySetting, NSMutableArray;

@class WXPBGeneratedMessage;

@interface AccountExtraSettingConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *configGroup; // @dynamic configGroup;
@property(retain, nonatomic) NSMutableArray *configs; // @dynamic configs;
@property(retain, nonatomic) FinderPrivacySetting *privacySetting; // @dynamic privacySetting;

@end

