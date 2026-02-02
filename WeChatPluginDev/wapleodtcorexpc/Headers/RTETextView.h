//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextView.h>

@class NSMutableArray, NSString, NSTextStorage, RTEAttachmentViewProvider;
@protocol RTETextViewDataDelegate, RTETextViewSectionDelegate;

@interface RTETextView : UITextView
{
    NSTextStorage *m_textStorage;
    _Bool m_forBidSelectionChangeNotify;
    _Bool m_onSetContent;
    NSMutableArray *m_arrEditInfo;
    Class m_containerViewClass;
    _Bool _autoResize;
    unsigned long long _sectionIndex;
    id <RTETextViewSectionDelegate> _sectionDelegate;
    id <RTETextViewDataDelegate> _dataDelegate;
    RTEAttachmentViewProvider *_attachmentViewProvider;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak RTEAttachmentViewProvider *attachmentViewProvider; // @synthesize attachmentViewProvider=_attachmentViewProvider;
@property(nonatomic) __weak id <RTETextViewDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <RTETextViewSectionDelegate> sectionDelegate; // @synthesize sectionDelegate=_sectionDelegate;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool autoResize; // @synthesize autoResize=_autoResize;
- (id)findSelectionViewIn:(id)arg1;
- (id)findSelectionView;
- (void)drawGlyphsForGlyphRect:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2 attachment:(id)arg3;
- (id)storage;
- (id)attachmentsInRange:(struct _NSRange)arg1;
- (void)invalidateAttachmentsInRange:(struct _NSRange)arg1;
- (void)chectHeightChange;
- (void)applyEditInfo;
- (void)unmarkText;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeAllAttachmentViews;
- (id)getTextAttachmentForAttribute:(id)arg1;
- (void)reloadContentAtRange:(struct _NSRange)arg1;
- (void)getContainerViewClass;
- (id)layout;
- (void)reloadAttachment:(id)arg1;
- (void)notifyTextViewDidChange;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

