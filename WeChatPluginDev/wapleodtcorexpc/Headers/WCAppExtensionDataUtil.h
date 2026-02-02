//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAppExtensionDataUtil : NSObject
{
}

+ (id)containerURL;
+ (_Bool)syncUserDefaults;
+ (id)userDefaults;
+ (id)appGroupID;
+ (void)WCNotificationArrivalReport_clearAllResultInfo;
+ (id)WCNotificationArrivalReport_resultInfoArray;
+ (void)WCNotificationArrivalReport_saveResultInfo:(id)arg1;
+ (id)domainDictPath;
+ (void)setDomainDict:(id)arg1;
+ (id)getLocalizationDirectoryPath;
+ (void)setBrandType:(unsigned int)arg1;
+ (void)setLocale:(id)arg1;

@end

