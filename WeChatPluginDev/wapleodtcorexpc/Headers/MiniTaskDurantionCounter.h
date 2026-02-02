//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MiniTaskDurantionCounter : NSObject
{
    id _userInfo;
    unsigned long long _storedDurantion;
    unsigned long long _baselineTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long baselineTime; // @synthesize baselineTime=_baselineTime;
@property(nonatomic) unsigned long long storedDurantion; // @synthesize storedDurantion=_storedDurantion;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (unsigned long long)durantion;
- (void)resume;
- (void)pause;
- (void)reset;
- (id)init;

@end

