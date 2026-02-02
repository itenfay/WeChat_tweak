//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CdnUploadTaskInfo, NSString;

@protocol RecordUploadCDNMgrDelegate <NSObject>

@optional
- (void)OnUploadMsgDataFail:(CMessageWrap *)arg1;
- (void)OnUploadRecordMsgDataSuccess:(CMessageWrap *)arg1;
- (void)OnUploadProgressChanged:(CMessageWrap *)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)OnUploadRecordForHistory:(CMessageWrap *)arg1 uploadInfo:(CdnUploadTaskInfo *)arg2 errMsg:(NSString *)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
@end

