//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSMutableString, NSString, RTEContentStorage;
@protocol RTESectionMgrDelegate;

@interface RTESectionMgr
{
    NSMutableString *m_contentString;
    RTEContentStorage *m_storage;
    NSMutableArray *m_sections;
    NSMutableArray *m_cacheTextViews;
    MMTimer *m_clearTextViewTimer;
    unsigned long long m_cacheLocation;
    unsigned long long m_cacheLocationIndex;
    unsigned long long m_totalLength;
    double m_cacheContentOffset;
    unsigned long long m_cacheContentOffsetIndex;
    double m_totalHeight;
    unsigned long long m_currentIndex;
    double m_currentOffset;
    id <RTESectionMgrDelegate> _delegate;
    double _lastCellExtendHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double lastCellExtendHeight; // @synthesize lastCellExtendHeight=_lastCellExtendHeight;
@property(nonatomic) __weak id <RTESectionMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUpdateTextView:(id)arg1;
- (unsigned long long)locationOfSectionAtIndex:(unsigned long long)arg1;
- (double)contentOffsetAtIndex:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)updateCacheLocationToLocation:(unsigned long long)arg1;
- (void)updateCacheOffsetToOffset:(double)arg1;
- (void)generateCellViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 needResize:(_Bool)arg3;
- (void)updateCacheViewsWithSectionChangeInfo:(id)arg1;
- (void)chectAndClearCacheViews;
- (id)getAllContent;
- (id)replaceSectionsAtRange:(struct _NSRange)arg1 withSections:(id)arg2 withText:(id)arg3;
- (id)replaceTextAtRange:(struct _NSRange)arg1 withText:(id)arg2;
- (id)appendSections:(id)arg1 withText:(id)arg2;
- (id)appendText:(id)arg1;
- (id)replaceContentAtRange:(struct _NSRange)arg1 atSection:(unsigned long long)arg2 withText:(id)arg3;
- (id)copySectionAtRange:(struct _NSRange)arg1;
- (id)getTextAttachmentForAttribute:(id)arg1;
- (void)reloadContentAtRange:(struct _NSRange)arg1 needRegenerateContent:(_Bool)arg2;
- (void)removeAllView;
- (void)updateContentOffset:(double)arg1;
- (id)viewAtLocation:(unsigned long long)arg1;
- (double)cellHeightAtIndex:(unsigned long long)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (double)totalHeightToIndex:(unsigned long long)arg1;
- (double)calculateTotalSectionHeight;
- (_Bool)checkRangeValid:(struct _NSRange)arg1;
- (unsigned long long)sectionCount;
- (id)initWithContentStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

