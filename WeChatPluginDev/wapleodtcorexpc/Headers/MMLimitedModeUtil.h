//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLimitedModeUtil : NSObject
{
}

+ (_Bool)EnableFindPasswordOptimize;
+ (void)showLimitedModeTip:(id)arg1;
+ (id)limitedModeTitle;
+ (void)popToSettingPageFrom:(id)arg1;
+ (void)removeTargeIndexViewContrller:(id)arg1 viewContrllerIndex:(long long)arg2;
+ (id)getTitleFromXlabOption:(id)arg1;
+ (id)subTitleForBizType:(long long)arg1 bizType:(long long)arg2;
+ (id)extraDescForLevel:(long long)arg1 bizType:(long long)arg2;
+ (id)imageForBizType:(long long)arg1 iconSize:(struct CGSize)arg2;
+ (id)titleForBizType:(long long)arg1;
+ (id)descForLevel:(long long)arg1 bizType:(long long)arg2;

@end

