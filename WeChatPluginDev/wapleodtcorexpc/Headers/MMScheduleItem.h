//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMScheduleItem : NSObject
{
    NSString *_displayStr;
    double _timeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSString *displayStr; // @synthesize displayStr=_displayStr;
- (id)initWithDisplayStr:(id)arg1 time:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

