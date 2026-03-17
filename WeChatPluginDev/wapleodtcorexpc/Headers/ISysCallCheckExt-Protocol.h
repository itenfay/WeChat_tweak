//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol ISysCallCheckExt

@optional
- (void)OnSysCallState:(int)arg1 andCallId:(NSString *)arg2;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
@end

