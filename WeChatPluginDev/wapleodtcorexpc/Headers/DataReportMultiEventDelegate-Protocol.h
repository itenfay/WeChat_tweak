//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DataReportMultiEventDelegate <NSObject>

@optional
- (void)onPbCgiResq:(id)arg1 cgiName:(NSString *)arg2 errCode:(unsigned int)arg3 errMsg:(NSString *)arg4;
- (void)onPbCgiReq:(id)arg1 cgiName:(NSString *)arg2;
@end

