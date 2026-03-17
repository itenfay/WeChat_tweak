//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdDynamicFeedValueParseUtil : NSObject
{
}

+ (void)parseColorValueForOriString:(id)arg1;
+ (double)calcLengthValueForPxValue:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
+ (double)calcLengthValueForRemValue:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
+ (_Bool)shouldLazyCalculateAdjustedValueForOriString:(id)arg1;
+ (void)parseLengthValueForOriString:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;

@end

