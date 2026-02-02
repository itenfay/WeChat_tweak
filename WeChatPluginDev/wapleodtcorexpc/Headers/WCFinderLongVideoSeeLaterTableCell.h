//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, RichTextView, UIView, WCFinderAuthorContactView, WCFinderCustomImageRichTextView, WCFinderFeedContentVM, WCFinderFeedImageCDNView, _TtC6WeChat25WCFinderSimpleProgressBar;
@protocol WCFinderLongVideoSeeLaterCellDelegate;

@interface WCFinderLongVideoSeeLaterTableCell : UITableViewCell
{
    _Bool _isLastCell;
    _Bool _isInSeeLaterList;
    id <WCFinderLongVideoSeeLaterCellDelegate> delegate;
    UIView *_coverBackView;
    WCFinderFeedImageCDNView *_coverImgView;
    RichTextView *_titleView;
    WCFinderAuthorContactView *_contactView;
    UIView *_sepLine;
    MMUIButton *_deleteButton;
    WCFinderCustomImageRichTextView *_reasonTextView;
    _TtC6WeChat25WCFinderSimpleProgressBar *_progressBar;
    WCFinderFeedContentVM *_contentVM;
    struct CGSize _layoutSize;
}

+ (double)getTitleMaxWidthWithWidth:(double)arg1;
+ (double)cellHeightWithContentVM:(id)arg1 width:(double)arg2;
+ (id)seeLaterReasonTextWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInSeeLaterList; // @synthesize isInSeeLaterList=_isInSeeLaterList;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *reasonTextView; // @synthesize reasonTextView=_reasonTextView;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) WCFinderAuthorContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) UIView *coverBackView; // @synthesize coverBackView=_coverBackView;
@property(nonatomic) __weak id <WCFinderLongVideoSeeLaterCellDelegate> delegate; // @synthesize delegate;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (void)onLongPress:(id)arg1;
- (void)onDeleteButtonClick:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getReasonContent;
- (void)updateWithContentVM:(id)arg1 isLastCell:(_Bool)arg2 isInSeeLaterList:(_Bool)arg3;
- (int)getCommentScene;
- (void)setupUI;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

