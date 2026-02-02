//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString;

@interface WCMusicListenHistoryTitleView : UIView
{
    NSString *_title;
    CDUnknownBlockType _deleteButtonHandler;
    MMUILabel *_titleLabel;
    MMUIButton *_deleteButton;
    UIView *_separatorView;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType deleteButtonHandler; // @synthesize deleteButtonHandler=_deleteButtonHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

