//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RadarSearchSetting : NSObject
{
    int _usrEduTimes;
    int _enterRadarTimes;
}

@property(nonatomic) int enterRadarTimes; // @synthesize enterRadarTimes=_enterRadarTimes;
@property(nonatomic) int usrEduTimes; // @synthesize usrEduTimes=_usrEduTimes;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

