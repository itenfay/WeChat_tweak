//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetProfileInfoResponse, NSString, UpdateWxaEvaluateResponse;

@protocol IWAProfileServiceExt

@optional
- (void)onUpdateProfileLike:(NSString *)arg1 bLike:(_Bool)arg2 Success:(_Bool)arg3;
- (void)onUpdateProfileEvaluate:(UpdateWxaEvaluateResponse *)arg1 userName:(NSString *)arg2 Score:(unsigned int)arg3;
- (void)onFetchProfileInfo:(GetProfileInfoResponse *)arg1 userName:(NSString *)arg2;
@end

