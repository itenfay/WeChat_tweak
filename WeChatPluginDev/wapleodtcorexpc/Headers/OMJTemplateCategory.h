//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface OMJTemplateCategory : NSObject
{
    NSString *_categoryID;
    NSString *_categoryName;
    NSURL *_thumbnailURL;
    NSArray *_templateInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(readonly, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBackingCategory:(const void *)arg1;

@end

