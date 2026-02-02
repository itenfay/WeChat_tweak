//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UIImageView, UILabel, UISwitch;

@interface WARemoteDebugPanelView : UIView
{
    struct CGPoint _priorPoint;
    UIImageView *_connectImageView;
    UILabel *_connectLabel;
    UIImageView *_serverImageView;
    UILabel *_serverLabel;
    UILabel *_noConfirmedLabel;
    UILabel *_noSendLabel;
    UILabel *_sendoutLabel;
    UILabel *_recvinLabel;
    UIView *_splitLine;
    UIButton *_stopButton;
    UIButton *_shrinkButton;
    UIButton *_expandButton;
    UISwitch *_showLogSwitch;
    UILabel *_showLogLabel;
    UIView *_containerView;
    NSMutableArray *_labelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
- (void)onShrinkButtonChanged:(id)arg1;
- (void)onExpandButtonChanged:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)refreshPanelHeight;
- (void)updatePrintItemList:(id)arg1;
- (void)updateRecvLength:(id)arg1 recvCount:(unsigned int)arg2;
- (void)updateSendLength:(id)arg1 sendCount:(unsigned int)arg2;
- (void)updateNoSendCount:(unsigned int)arg1;
- (void)updateNoConfirmedCount:(unsigned int)arg1;
- (void)updateServerState:(id)arg1;
- (void)updateConnectState:(id)arg1;
- (void)setupSubviews;

@end

