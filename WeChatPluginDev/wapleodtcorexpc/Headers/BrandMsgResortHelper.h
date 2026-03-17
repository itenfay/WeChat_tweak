//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandMsgResortHelper : NSObject
{
}

+ (id)genBizMsgItemFromMsgWrap:(id)arg1 maxGroupId:(unsigned int)arg2;
+ (unsigned int)debugSwitchForceResortForScene:(unsigned long long)arg1;
+ (_Bool)isInsideResortScene:(unsigned long long)arg1;
+ (_Bool)isOutsideResortScene:(unsigned long long)arg1;

@end

