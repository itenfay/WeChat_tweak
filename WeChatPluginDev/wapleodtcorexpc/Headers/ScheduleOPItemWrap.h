//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ScheduleOPWrap;

@interface ScheduleOPItemWrap : NSObject
{
    NSString *_word;
    ScheduleOPWrap *_scheduleOpWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

