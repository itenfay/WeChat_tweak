//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdCardActionButton, WCDataItem;
@protocol WCAdCardActionButtonLogicDelegate;

@interface WCAdCardActionButtonLogic
{
    id <WCAdCardActionButtonLogicDelegate> _delegate;
    long long _buttonStyle;
    WCDataItem *_dataItem;
    WCAdCardActionButton *_actionButton;
}

+ (long long)getActionButtonStyleWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) __weak id <WCAdCardActionButtonLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;
- (void)start;
- (void)onActionBtnClicked;
- (id)fetchActionButton;
- (id)initWithDataItem:(id)arg1;

@end

