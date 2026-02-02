//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MiniTaskCollectionSectionModel : NSObject
{
    _Bool _hideHeader;
    _Bool _allowEdit;
    _Bool _allowClearAll;
    _Bool _isEditing;
    _Bool _canLoadMore;
    long long _sectionType;
    NSString *_title;
    NSMutableArray *_cellModels;
}

+ (id)sectionWithType:(long long)arg1 title:(id)arg2 cellModels:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool allowClearAll; // @synthesize allowClearAll=_allowClearAll;
@property(nonatomic) _Bool allowEdit; // @synthesize allowEdit=_allowEdit;
@property(nonatomic) _Bool hideHeader; // @synthesize hideHeader=_hideHeader;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
- (long long)cellCount;
- (id)init;

@end

