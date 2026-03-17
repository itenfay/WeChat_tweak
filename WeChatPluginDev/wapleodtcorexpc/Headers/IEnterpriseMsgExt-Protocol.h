//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSArray, NSString;

@protocol IEnterpriseMsgExt

@optional
- (void)OnBeginDownloadAppData:(CMessageWrap *)arg1 Brand:(NSString *)arg2;
- (void)OnDelMsg:(NSString *)arg1 Brand:(NSString *)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(NSString *)arg1 Brand:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3;
- (void)OnSyncReadMsg:(NSString *)arg1 Brand:(NSString *)arg2;
- (void)OnUnReadEnterpriseMsgCountChange:(NSString *)arg1 Brand:(NSString *)arg2;
- (void)OnModEnterpriseMsg:(NSString *)arg1 Brand:(NSString *)arg2 WrapMsg:(CMessageWrap *)arg3;
- (void)OnBatchAddEnterpriseMsg:(NSArray *)arg1 Brand:(NSString *)arg2;
- (void)OnAddEnterpriseMsg:(NSString *)arg1 Brand:(NSString *)arg2 WrapMsg:(CMessageWrap *)arg3;
@end

