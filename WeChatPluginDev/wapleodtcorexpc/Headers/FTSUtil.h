//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSUtil : NSObject
{
}

+ (id)getABTestItemWithKey:(id)arg1;
+ (id)parseForContent:(id)arg1 arrTagRanges:(id)arg2;
+ (id)FormatGroupMatchString:(id)arg1;
+ (unsigned int)GetLastSearchTimeForGroup:(id)arg1;
+ (id)GetClickDaysFormatForFeature:(id)arg1;
+ (id)GetClickCountFormatForFeature:(id)arg1;
+ (id)GetStatTopHitInfoWithTotal:(unsigned int)arg1 specCount:(unsigned int)arg2;
+ (unsigned int)CalMMContactCountForGroupContact:(id)arg1 dicCache:(id)arg2;
+ (unsigned int)ConvertClickTypeFromFeedType:(unsigned int)arg1;
+ (id)encryptForLog:(id)arg1;
+ (double)getSearchCancelButtonWidth;
+ (void)commonSearchClickReport:(id)arg1;
+ (id)FTSOpenIMAppIdLogFromContact:(id)arg1;
+ (long long)GetMd5Int64:(id)arg1;
+ (id)getFTSDBPath;
+ (id)getUserFTSRootDir;

@end

