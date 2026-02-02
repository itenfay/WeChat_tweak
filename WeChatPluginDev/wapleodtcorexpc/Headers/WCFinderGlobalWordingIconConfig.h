//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLightDarkIconName;

@interface WCFinderGlobalWordingIconConfig : NSObject
{
    NSString *_miaojianActionSheetTips;
    WCFinderLightDarkIconName *_miaojianActionSheetIcon;
    WCFinderLightDarkIconName *_miniShopIcon;
    NSString *_adDeleteFeedTips;
    NSString *_adSelfSeeTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adSelfSeeTips; // @synthesize adSelfSeeTips=_adSelfSeeTips;
@property(copy, nonatomic) NSString *adDeleteFeedTips; // @synthesize adDeleteFeedTips=_adDeleteFeedTips;
@property(retain, nonatomic) WCFinderLightDarkIconName *miniShopIcon; // @synthesize miniShopIcon=_miniShopIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *miaojianActionSheetIcon; // @synthesize miaojianActionSheetIcon=_miaojianActionSheetIcon;
@property(copy, nonatomic) NSString *miaojianActionSheetTips; // @synthesize miaojianActionSheetTips=_miaojianActionSheetTips;

@end

