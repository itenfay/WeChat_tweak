//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCOpLog : NSObject
{
}

- (_Bool)modSnsBlackList:(id)arg1 modType:(long long)arg2 syncNow:(_Bool)arg3;
- (_Bool)changeSnsPrivacySetting:(long long)arg1 sync:(_Bool)arg2 andRecentHours:(unsigned int)arg3;
- (unsigned int)getRecentHoursForType:(int)arg1;
- (_Bool)changeShowRecent:(int)arg1 sync:(_Bool)arg2;
- (_Bool)changeStrangerRight:(_Bool)arg1 sync:(_Bool)arg2;
- (id)init;

@end

