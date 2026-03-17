//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FingertipSearchUtils : NSObject
{
}

+ (int)getMaxPrimeWithValue:(int)arg1;
+ (unsigned int)checkMainKeywordResource;
+ (void)refreshResourceWithPath:(id)arg1 TargetPath:(id)arg2;
+ (_Bool)IsOpenRegexSearch;
+ (_Bool)IsCloseBytesSearch;
+ (_Bool)IsOpenBytesSearch;
+ (unsigned int)getSearchPrime;
+ (_Bool)isCloseFingertipSearch;
+ (unsigned int)getSearchMaxCount;
+ (unsigned int)getMaxKeywordCount;
+ (unsigned int)getMatchContentMaxLength;
+ (unsigned int)getMatchContentMinLength;
+ (id)getByteSearchModelPath;
+ (id)getRealTimeDataPath;
+ (id)getMainKeywordsPath;
+ (id)fingerSearchDirPath;
+ (long long)getFootprintResidentMemory;

@end

