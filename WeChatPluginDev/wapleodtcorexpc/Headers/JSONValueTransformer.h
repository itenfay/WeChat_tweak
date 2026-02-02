//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface JSONValueTransformer : NSObject
{
    NSDictionary *_primitivesNames;
}

+ (Class)classByResolvingClusterClasses:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *primitivesNames; // @synthesize primitivesNames=_primitivesNames;
- (id)__NSMutableDictionaryFromNSArray:(id)arg1;
- (id)__NSDictionaryFromNSArray:(id)arg1;
- (id)JSONObjectFromNSTimeZone:(id)arg1;
- (id)NSTimeZoneFromNSString:(id)arg1;
- (id)NSDateFromNSNumber:(id)arg1;
- (id)__JSONObjectFromNSDate:(id)arg1;
- (id)__NSDateFromNSString:(id)arg1;
- (id)importDateFormatter;
- (id)JSONObjectFromNSURL:(id)arg1;
- (id)NSURLFromNSString:(id)arg1;
- (id)NSStringFromNSDecimalNumber:(id)arg1;
- (id)NSDecimalNumberFromNSString:(id)arg1;
- (id)NSStringFromNSNumber:(id)arg1;
- (id)NSNumberFromNSString:(id)arg1;
- (id)NSNumberFromfloat:(float)arg1;
- (float)floatFromNSNumber:(id)arg1;
- (float)floatFromNSString:(id)arg1;
- (float)floatFromObject:(id)arg1;
- (id)JSONObjectFromBOOL:(id)arg1;
- (id)BOOLFromNSString:(id)arg1;
- (id)BOOLFromNSNumber:(id)arg1;
- (id)JSONObjectFromNSMutableSet:(id)arg1;
- (id)JSONObjectFromNSSet:(id)arg1;
- (id)NSMutableSetFromNSArray:(id)arg1;
- (id)NSSetFromNSArray:(id)arg1;
- (id)NSMutableDictionaryFromNSDictionary:(id)arg1;
- (id)NSMutableArrayFromNSArray:(id)arg1;
- (id)NSMutableStringFromNSString:(id)arg1;
- (id)init;

@end

