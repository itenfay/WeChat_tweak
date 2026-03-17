//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DeviceRankSetting : NSObject
{
    unsigned int _rankSettingFlag;
}

@property(nonatomic) unsigned int rankSettingFlag; // @synthesize rankSettingFlag=_rankSettingFlag;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

