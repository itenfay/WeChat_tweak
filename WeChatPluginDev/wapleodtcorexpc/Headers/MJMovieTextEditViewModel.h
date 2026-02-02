//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSegmentViewModel, NSArray, NSString, OMCSegment, OMJID, OMJMaterialInfo, OMJMaterialManager;

@interface MJMovieTextEditViewModel : NSObject
{
    _Bool _hasChanges;
    long long _entranceType;
    long long _editType;
    NSString *_placeholder;
    NSString *_text;
    NSString *_subText;
    NSString *_materialID;
    OMJID *_contentDescBelongingID;
    MJSegmentViewModel *_segmentVM;
    NSString *_originalText;
    OMJMaterialInfo *_defaultTitleMaterialInfo;
    NSString *_originalSubText;
    NSArray *_titleItems;
    NSArray *_contentItems;
    OMCSegment *_segment;
    OMJMaterialManager *_manager;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) OMJMaterialManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) OMCSegment *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(retain, nonatomic) NSArray *titleItems; // @synthesize titleItems=_titleItems;
@property(retain, nonatomic) NSString *originalSubText; // @synthesize originalSubText=_originalSubText;
@property(retain, nonatomic) OMJMaterialInfo *defaultTitleMaterialInfo; // @synthesize defaultTitleMaterialInfo=_defaultTitleMaterialInfo;
@property(retain, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
@property(retain, nonatomic) OMJID *contentDescBelongingID; // @synthesize contentDescBelongingID=_contentDescBelongingID;
@property(retain, nonatomic) NSString *materialID; // @synthesize materialID=_materialID;
@property(retain, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
@property(nonatomic) long long entranceType; // @synthesize entranceType=_entranceType;
- (id)currentStyleEditingSegmentVM;
- (id)undoTitle;
- (void)updateSubText:(id)arg1;
- (void)updateText:(id)arg1;
- (void)updateSegmentVM:(id)arg1;
@property(readonly, nonatomic) OMJID *segmentID;
- (void)prepareTextSticker:(CDUnknownBlockType)arg1;
- (id)titleItemAtIndex:(long long)arg1;
- (id)contentItemAtIndex:(long long)arg1;
- (long long)numberOfPages;
@property(readonly, nonatomic) long long entrancePageIndex;
- (void)fetchDatas;
@property(readonly, nonatomic) _Bool hasTextChanges;
- (void)dealloc;
- (id)initWithEntranceType:(long long)arg1 editType:(long long)arg2 placeholder:(id)arg3 text:(id)arg4 subText:(id)arg5 segment:(id)arg6 segmentVM:(id)arg7 materailManager:(id)arg8 scene:(unsigned long long)arg9 defaultTitleMaterialInfo:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

