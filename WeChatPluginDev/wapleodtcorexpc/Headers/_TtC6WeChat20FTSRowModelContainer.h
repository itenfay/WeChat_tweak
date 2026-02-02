//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SearchMatchTip;
@protocol _TtP6WeChat11FTSRowModel_;

@interface _TtC6WeChat20FTSRowModelContainer : NSObject
{
    MISSING_TYPE *model;
    MISSING_TYPE *matchTip;
    MISSING_TYPE *type;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFeature:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(_Bool)arg3 searchText:(id)arg4;
- (id)initWithContact:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(_Bool)arg3;
- (id)initWithModel:(id)arg1 matchTip:(id)arg2 type:(unsigned long long)arg3;
@property(nonatomic, readonly) unsigned long long type; // @synthesize type;
@property(nonatomic, readonly) SearchMatchTip *matchTip; // @synthesize matchTip;
@property(nonatomic, readonly) id <_TtP6WeChat11FTSRowModel_> model; // @synthesize model;
- (id)diffIdentifier;

@end

