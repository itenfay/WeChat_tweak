//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMLiveCommentDataItem, MMLiveCommentPubbleCell, MMLiveCommentPubbleCellFrame, MMUIButton;

@interface MMLiveCommentHeaderFooterView : UITableViewHeaderFooterView
{
    _Bool _isAudience;
    _Bool _isAssistant;
    _Bool _isShowMenu;
    MMLiveCommentDataItem *_commentItem;
    MMLiveCommentPubbleCellFrame *_cellFrame;
    long long _section;
    CDUnknownBlockType _actionInvokeBloc;
    MMLiveCommentPubbleCell *_pubbleCell;
    MMUIButton *_pubbleButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowMenu; // @synthesize isShowMenu=_isShowMenu;
@property(retain, nonatomic) MMUIButton *pubbleButton; // @synthesize pubbleButton=_pubbleButton;
@property(retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell; // @synthesize pubbleCell=_pubbleCell;
@property(copy, nonatomic) CDUnknownBlockType actionInvokeBloc; // @synthesize actionInvokeBloc=_actionInvokeBloc;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) MMLiveCommentPubbleCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
- (void)onCommentActionTop:(id)arg1;
- (double)calculateMenuControllerY;
- (void)showMenuItemsForAnchor;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)createPubbleCellWithCellFrame:(id)arg1 section:(long long)arg2 topSection:(long long)arg3;

@end

