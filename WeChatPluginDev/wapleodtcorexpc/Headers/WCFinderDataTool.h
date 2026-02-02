//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderDataTool : NSObject
{
}

+ (_Bool)areRangesOverlapping:(struct _NSRange)arg1 range2:(struct _NSRange)arg2;
+ (unsigned long long)unicodeLengthOfString:(id)arg1;
+ (_Bool)isHttpUrl:(id)arg1;
+ (id)mergeSvrHeaderParamsBy:(id)arg1 separateChar:(id)arg2 cdnHeaderParamType:(unsigned long long)arg3;
+ (_Bool)isInvalidWidHeightCGRect:(struct CGRect)arg1;
+ (void)mergePublisherPostInfo:(id)arg1 toPostSession:(id)arg2;
+ (_Bool)isFromCarouselScene:(unsigned long long)arg1;
+ (id)colorFromRGBAString:(id)arg1;
+ (_Bool)compareProtoObject:(id)arg1 withObject:(id)arg2;
+ (_Bool)isInvalidSize:(struct CGSize)arg1;
+ (_Bool)isValidLocationLongitude:(double)arg1 latitude:(double)arg2;
+ (long long)countOfTimestampsGreaterThan:(id)arg1 inArray:(id)arg2;
+ (id)base64EncodeString:(id)arg1;
+ (id)getTimestampsInNDays:(id)arg1 days:(long long)arg2;
+ (id)removeTimestampsBeforeNDays:(id)arg1 days:(long long)arg2;
+ (void)fetchPHAssetForVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (struct CLLocationCoordinate2D)genAssetCoordinateFromAssets:(id)arg1;
+ (_Bool)assetHasGPSInfo:(id)arg1;
+ (struct CLLocationCoordinate2D)genAssetCoordinateFromAssetId:(id)arg1;
+ (id)getTargetIvarInObject:(id)arg1 className:(Class)arg2;
+ (void)mockCatonAction;
+ (_Bool)isSameWeekByTimeStamp1:(long long)arg1 timeStamp2:(long long)arg2;
+ (id)convertJsonStringToData:(id)arg1;
+ (_Bool)isSameDayTimeStamp1:(long long)arg1 timeStamp2:(long long)arg2;
+ (id)clearNotSameDayTimeStamp:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)arrayToJsonString:(id)arg1;

@end

