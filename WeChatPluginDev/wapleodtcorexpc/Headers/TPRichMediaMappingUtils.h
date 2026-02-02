//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPRichMediaMappingUtils : NSObject
{
}

+ (vector_d4921383)nativeRichMediaTimeRangeArrayWithTimeRangeArray:(id)arg1;
+ (struct TPPlayerRichMediaTimeRange)nativeRichMediaTimeRangeWithTimeRange:(id)arg1;
+ (vector_1ee95920)int64VectorWithNumberArray:(id)arg1;
+ (void)convertNumberArray:(id)arg1 toIntVector:(void *)arg2;
+ (id)richMediaResponseWithNativeResponse:(const void *)arg1;
+ (id)richMediaContentWithNativeContent:(const void *)arg1;
+ (struct TPPlayerRichMediaExtraRequestInfo)nativeRichMediaExtraRequestInfoWithExtraRequestInfo:(id)arg1;
+ (int)nativeActOnOptionWithActOnOption:(long long)arg1;
+ (id)richMediaInfoArrayWithNativeInfoArray:(const void *)arg1;
+ (id)richMediaInfoWithNativeRichMediaInfo:(const void *)arg1;

@end

