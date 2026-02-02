//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIButton, UILabel;
@protocol WAAppConfirmWindowDelegate;

@interface WAAppConfirmWindow : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    UILabel *_contentLabel;
    NSMutableArray *_itemLabels;
    UIButton *_link;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSString *_title;
    NSString *_content;
    NSArray *_authItems;
    NSString *_linkTitle;
    id <WAAppConfirmWindowDelegate> _confirmWindowDelegate;
}

+ (id)setupWindow:(id)arg1 title:(id)arg2 content:(id)arg3 authGroupList:(id)arg4 link:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAAppConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(retain, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(retain, nonatomic) NSArray *authItems; // @synthesize authItems=_authItems;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)onLinkClicked:(id)arg1;
- (void)onClickButtonCancel:(id)arg1;
- (void)onClickButtonConfirm:(id)arg1;
- (id)titleText;
- (double)designNoTableContentHeightToContentWidthRatio;
- (unsigned long long)designContentWidth;
- (struct CGRect)contentViewFrame;
- (void)layoutSubviews;
- (void)initView;
- (void)closeWindow;

@end

