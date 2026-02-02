//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMUIButton, NSString, WCFinderJumpInfo;
@protocol WCFinderJumpInfoButtonDelegate;

@interface WCFinderJumpInfoButton : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoButtonDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateButton:(id)arg1;
- (void)onActionButtonDidClick;
- (void)changeToShow:(_Bool)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

