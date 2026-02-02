//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface StatusAffDBUtils : NSObject
{
}

+ (long long)unPackDBLikeId:(id)arg1;
+ (id)packDBLikeId:(id)arg1;
+ (id)createMessageThumbData:(id)arg1;
+ (id)proto2TsLike:(id)arg1;
+ (id)tsLike2Proto:(id)arg1;
+ (id)proto2TsComment:(id)arg1;
+ (id)tsComment2Proto:(id)arg1;
+ (void)rawDataFillModel:(id)arg1 model:(id)arg2;
+ (void)privateInfoDataFillModel:(id)arg1 model:(id)arg2;
+ (id)proto2TsModel:(id)arg1;
+ (_Bool)isNullOrEmpty:(id)arg1;
+ (id)createCustomInfo:(id)arg1;
+ (id)createVisibilityInfo:(id)arg1;
+ (id)createStatusFooterInfo:(id)arg1;
+ (id)createStatusMediaInfo:(id)arg1;
+ (id)createPBExtraInfo:(id)arg1;
+ (id)createPBPoiInfo:(id)arg1;
+ (id)createPrivateInfoData:(id)arg1;
+ (id)tsModel2Proto:(id)arg1;
+ (id)createPbStatusRawData:(id)arg1 emojiInfo:(id)arg2 poiInfo:(id)arg3 option:(long long)arg4 extraInfo:(id)arg5 visibilityInfo:(id)arg6 customInfo:(id)arg7 mediaInfos:(id)arg8 footerInfo:(id)arg9;

@end

