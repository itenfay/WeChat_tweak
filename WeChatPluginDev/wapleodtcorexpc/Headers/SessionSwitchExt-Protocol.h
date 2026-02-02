//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol SessionSwitchExt

@optional
- (void)onSessionQuit:(NSString *)arg1 withTime:(unsigned long long)arg2;
- (void)onSessionEnter:(NSString *)arg1 withTime:(unsigned long long)arg2;
@end

