//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonTingNativeControllerCommonDataObjc : NSObject
{
}

+ (id)genAsyncResult:(long long)arg1 errMsg:(id)arg2;
+ (id)getContactByUsername:(id)arg1;
+ (void)requestMediaInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)onFinderFeedLike:(id)arg1 nonceId:(id)arg2 actToLike:(_Bool)arg3 realName:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)getWxUsername:(CDUnknownBlockType)arg1;
+ (void)getPoiInfo:(CDUnknownBlockType)arg1;
+ (void)getFinderContactInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getContactInfoFromHash:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getContactInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getBrandContactInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)followFinderAccount:(id)arg1 isCancel:(_Bool)arg2 tingItemData:(id)arg3 requestScene:(long long)arg4 extraInfo:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end

