//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PeopleNearByReporter : NSObject
{
}

+ (void)reportUserInfoRelated:(id)arg1 userAtIndex:(unsigned long long)arg2 action:(unsigned int)arg3 filterType:(unsigned int)arg4 Scene:(int)arg5;
+ (void)reportAction:(unsigned int)arg1 FilterType:(unsigned int)arg2 Scene:(unsigned int)arg3;
+ (void)reportStayTime:(unsigned long long)arg1;
+ (unsigned int)getFilterTypeFromSetting;

@end

