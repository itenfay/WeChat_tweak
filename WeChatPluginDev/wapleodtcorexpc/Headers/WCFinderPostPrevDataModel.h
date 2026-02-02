//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderPostPrevDataModel : NSObject
{
    NSMutableArray *_usualTopicsArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *usualTopicsArray; // @synthesize usualTopicsArray=_usualTopicsArray;
- (id)filterUsualTopicFromPreMatchString:(id)arg1;
- (void)_filterValidTopics:(id)arg1;
- (id)initWithPrevDataResponse:(id)arg1;

@end

