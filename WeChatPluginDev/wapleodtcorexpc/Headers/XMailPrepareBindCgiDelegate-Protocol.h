//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, XMailPrepareBindCgi;

@protocol XMailPrepareBindCgiDelegate <NSObject>

@optional
- (void)onXMailPrepareBindCgi:(XMailPrepareBindCgi *)arg1 success:(_Bool)arg2 loginUrl:(NSString *)arg3 wxRegMailAddr:(NSString *)arg4 wxMailRegUrl:(NSString *)arg5 wxMailHeadUrl:(NSString *)arg6;
@end

