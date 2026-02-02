//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSArray;

@interface TingCoverInfo : NSObject
{
    unsigned int _style;
    NSArray *_arrCoverUrls;
    unsigned long long _coverNum;
    MMListenCategoryItem *_categoryItem;
}

+ (id)coverVMFromCategoryItem:(id)arg1;
+ (id)coverVMFromUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(nonatomic) unsigned long long coverNum; // @synthesize coverNum=_coverNum;
@property(retain, nonatomic) NSArray *arrCoverUrls; // @synthesize arrCoverUrls=_arrCoverUrls;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (unsigned long long)maxFetchingCount;
- (_Bool)isEqualToCoverInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isPagStyle;

@end

