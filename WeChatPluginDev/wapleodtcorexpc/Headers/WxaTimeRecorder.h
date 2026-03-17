//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxaTimeRecorder : NSObject
{
}

+ (void)clearKVTimeRecord:(id)arg1;
+ (id)getKVTimeRecord:(id)arg1 key:(id)arg2;
+ (void)setKVTimeRecord:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)endTimeRecord:(id)arg1;
+ (void)checkKeyPointTimeRecord:(id)arg1 key:(id)arg2;
+ (void)startKeyPointTimeRecord:(id)arg1 key:(id)arg2;
+ (id)startTimeRecord;
- (id)init;

@end

