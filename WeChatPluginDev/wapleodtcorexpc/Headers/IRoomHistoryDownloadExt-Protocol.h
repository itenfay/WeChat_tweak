//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IRoomHistoryDownloadExt <NSObject>

@optional
- (void)OnRoomHistoryDownloadExipired:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
- (void)OnRoomHistoryDownloadFail:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
- (void)OnRoomHistoryDownloadOK:(CMessageWrap *)arg1;
@end

