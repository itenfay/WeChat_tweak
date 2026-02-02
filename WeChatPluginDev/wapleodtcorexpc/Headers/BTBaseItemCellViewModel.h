//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTBaseItemCellView, BTMsgSectionData, CContact, CMessageWrap;

@interface BTBaseItemCellViewModel
{
    double _viewWidth;
    double _viewHeight;
    CMessageWrap *_msgWrap;
    CContact *_contact;
    _Bool _isTitleUp;
    int _posInTL;
    int _msgSectionIndex;
    BTBaseItemCellView *_cellView;
    BTMsgSectionData *_sectionData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTitleUp; // @synthesize isTitleUp=_isTitleUp;
@property(nonatomic) int msgSectionIndex; // @synthesize msgSectionIndex=_msgSectionIndex;
@property(nonatomic) int posInTL; // @synthesize posInTL=_posInTL;
@property(nonatomic) __weak BTMsgSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) __weak BTBaseItemCellView *cellView; // @synthesize cellView=_cellView;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)initWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)createItemCellView;
- (id)itemViewClassName;
@property(readonly, nonatomic) double viewHeight;

@end

