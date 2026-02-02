//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface EmoticonMixedPreviewGridViewConfig : NSObject
{
    unsigned long long _type;
    NSArray *_emojiInfoArr;
    NSArray *_emojiSummaryArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *emojiSummaryArr; // @synthesize emojiSummaryArr=_emojiSummaryArr;
@property(retain, nonatomic) NSArray *emojiInfoArr; // @synthesize emojiInfoArr=_emojiInfoArr;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

