//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveErrorUtil : NSObject
{
}

+ (_Bool)isAntiSpamErrorCodeForConnectMicValid:(long long)arg1;
+ (id)getDisplayErrorMessageForConnectMicByErrCode:(long long)arg1;
+ (id)getDisplayErrorMessageForFinderLiveByErrCode:(long long)arg1;
+ (_Bool)isLiveBanByPolicyWith:(long long)arg1;
+ (id)getDefaultDisplayErrorMessageByErrCode:(long long)arg1;
+ (id)createLiveErrorWithDomain:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3 extraInfo:(id)arg4;
+ (id)createLiveErrorWithDomain:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
+ (id)createLiveErrorWithDomain:(id)arg1 errType:(long long)arg2 errCode:(long long)arg3 errMsg:(id)arg4;

@end

