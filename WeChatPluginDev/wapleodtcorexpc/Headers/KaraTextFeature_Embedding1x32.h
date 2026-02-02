//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface KaraTextFeature_Embedding1x32 : NSObject
{
    NSArray *_values;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)archivedWCTValue;
- (id)initWithValues:(id)arg1;

@end

