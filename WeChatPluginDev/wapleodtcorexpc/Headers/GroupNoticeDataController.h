//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface GroupNoticeDataController
{
    _Bool _needReloadForEditMode;
    NSMutableArray *_lastDataList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lastDataList; // @synthesize lastDataList=_lastDataList;
@property(nonatomic) _Bool needReloadForEditMode; // @synthesize needReloadForEditMode=_needReloadForEditMode;
- (void)notifyContentChange;
- (void)onReplaceTextInRange:(struct _NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;
- (void)pasteSelectedContent;
- (void)insertAttributes:(id)arg1;
- (long long)getAttachmentSizeWithContentStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)addSizeWithNode:(id)arg1 size:(long long *)arg2;
- (void)saveWithHandler:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

@end

