//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsStarActionReporter : NSObject
{
}

+ (unsigned long long)ownerAlbumVisibleType;
+ (unsigned long long)privacyTypeWithPostPrivacy:(long long)arg1;
+ (unsigned long long)entranceTypeWithEntranceScene:(long long)arg1;
+ (void)reportWithDataItem:(id)arg1 actinType:(unsigned long long)arg2 actionScene:(unsigned long long)arg3 entranceScene:(long long)arg4;

@end

