//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UIView, WCCanvasComponentItem;
@protocol WCCanvasActionSheetDelegate, WCCanvasComponentDelegate;

@interface WCCanvasActionSheet
{
    UIView *_backgroundMask;
    UIView *_headerView;
    MMTableViewInfo *_tableViewInfo;
    _Bool _showCancelAction;
    _Bool _hideHeader;
    NSString *_title;
    NSString *_desc;
    NSString *_iconUrl;
    WCCanvasComponentItem *_bodyItem;
    id <WCCanvasComponentDelegate> _bodyDelegate;
    id <WCCanvasActionSheetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideHeader; // @synthesize hideHeader=_hideHeader;
@property(nonatomic) _Bool showCancelAction; // @synthesize showCancelAction=_showCancelAction;
@property(nonatomic) __weak id <WCCanvasActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> bodyDelegate; // @synthesize bodyDelegate=_bodyDelegate;
@property(retain, nonatomic) WCCanvasComponentItem *bodyItem; // @synthesize bodyItem=_bodyItem;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)clear;
- (void)onCancel:(id)arg1;
- (void)cancel;
- (void)makeBodyCell:(id)arg1 cellInfo:(id)arg2;
- (void)showInView:(id)arg1;

@end

