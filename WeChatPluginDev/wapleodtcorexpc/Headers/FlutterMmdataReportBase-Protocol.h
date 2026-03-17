//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FlutterMmdataReportBase <NSObject>

@optional
- (void)idKeyReport:(long long)arg1 key:(long long)arg2 value:(long long)arg3;
- (void)kvReport:(long long)arg1 value:(NSString *)arg2;
@end

