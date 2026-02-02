//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBGMCategoryItem : NSObject
{
    NSString *_categoryID;
    NSString *_categoryName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;

@end

