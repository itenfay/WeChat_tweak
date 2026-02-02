//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCFinderCommentDetailTextViewContext;
@protocol WCFinderCommentDetailTextViewMentionDelegate;

@interface WCFinderCommentDetailTextView
{
    id <WCFinderCommentDetailTextViewMentionDelegate> _mentionDelegate;
    NSMutableArray *_mentionEntryArray;
    WCFinderCommentDetailTextViewContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentDetailTextViewContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *mentionEntryArray; // @synthesize mentionEntryArray=_mentionEntryArray;
@property(nonatomic) __weak id <WCFinderCommentDetailTextViewMentionDelegate> mentionDelegate; // @synthesize mentionDelegate=_mentionDelegate;
- (void)clearAllMentionInfo;
- (void)updateValidMentionEntryWithInvalidDeletionRange:(struct _NSRange)arg1;
- (void)updateTextViewCursorToIndex:(unsigned long long)arg1;
- (void)clearInvalidMentionEntry;
- (unsigned long long)insertMentionContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)handleLastSimpleDeleteOrComplexAdditionWithEntry:(id)arg1 changeText:(id)arg2 changeRange:(struct _NSRange)arg3;
- (void)handleLastSimpleAppendedWithEntry:(id)arg1 changeText:(id)arg2 changeRange:(struct _NSRange)arg3;
- (id)getValidCommentMentionInfoArray;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

@end

