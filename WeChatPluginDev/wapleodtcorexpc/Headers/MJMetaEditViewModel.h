//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJMetaBackupInfo, MJSegmentViewModel, NSArray;

@interface MJMetaEditViewModel : NSObject
{
    MJSegmentViewModel *_segmentVM;
    MJMetaBackupInfo *_info;
    CDUnknownBlockType _dateDidChageHandler;
    NSArray *_titleItems;
    NSArray *_contentItems;
    long long _editType;
}

- (void).cxx_destruct;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(retain, nonatomic) NSArray *titleItems; // @synthesize titleItems=_titleItems;
@property(copy, nonatomic) CDUnknownBlockType dateDidChageHandler; // @synthesize dateDidChageHandler=_dateDidChageHandler;
@property(retain, nonatomic) MJMetaBackupInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
- (id)createDatePanel;
- (void)reloadEditingPage;
- (void)fetchDatas;
- (id)contentItemAtIndex:(long long)arg1;
- (id)titleItemAtIndex:(long long)arg1;
- (long long)numberOfPages;
- (double)centerPageTitleWidth;
@property(readonly, nonatomic) long long entrancePageIndex;
- (id)initWithSegmentVM:(id)arg1 editType:(long long)arg2;

@end

