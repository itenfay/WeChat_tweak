//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol IPSTNSyncExt

@optional
- (void)OnGotDTMFPayloadType:(unsigned int)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(NSString *)arg4 ErrTitle:(NSString *)arg5 DataFlag:(unsigned int)arg6;
- (void)OnSyncError:(int)arg1;
@end

