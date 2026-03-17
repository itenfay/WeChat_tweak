//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PatSuffixWrap, PatWrap;

@protocol SendPatExt <NSObject>

@optional
- (void)onRevokePat:(PatWrap *)arg1 fromChat:(NSString *)arg2 isSuccess:(_Bool)arg3;
- (void)onUpdatePatSuffixWrap:(PatSuffixWrap *)arg1 forUser:(NSString *)arg2;
@end

