//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MJVideoTemplateCategory : NSObject
{
    NSString *_categoryKey;
    NSString *_categoryName;
    NSArray *_videoTemplates;
}

+ (id)recommendedCategoryKey;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *videoTemplates; // @synthesize videoTemplates=_videoTemplates;
@property(readonly, copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, copy, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
- (id)initWithCategory:(id)arg1;

@end

