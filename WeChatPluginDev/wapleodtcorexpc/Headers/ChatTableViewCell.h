//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseChatCellView, UIView;

@interface ChatTableViewCell
{
    BaseChatCellView *m_cellView;
    _Bool m_willBeDisplayed;
    _Bool m_didEndDisplayed;
    CDUnknownBlockType _m_accessibilityElementsHiddenBlock;
    UIView *_selectionHighlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectionHighlightView; // @synthesize selectionHighlightView=_selectionHighlightView;
@property(copy, nonatomic) CDUnknownBlockType m_accessibilityElementsHiddenBlock; // @synthesize m_accessibilityElementsHiddenBlock=_m_accessibilityElementsHiddenBlock;
@property(readonly, nonatomic) BaseChatCellView *cellView; // @synthesize cellView=m_cellView;
- (void)enumerateCurrentMsgCells:(CDUnknownBlockType)arg1;
- (void)setSelectionHighlighHidden:(_Bool)arg1 animate:(_Bool)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)accessibilityElementsHidden;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)didEndDisplayed;
- (void)willBeDisplayed;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;

@end

