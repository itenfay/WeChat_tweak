//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveApplyConnectMicAudience, MMUIButton, NSArray, NSString, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer;
@protocol MMLiveConnectMicOperationPanelDelegate;

@interface MMLiveConnectMicOperationPanel : UIView
{
    _Bool _enableOperation;
    id <MMLiveConnectMicOperationPanelDelegate> _delegate;
    NSArray *_audienceArray;
    MMLiveApplyConnectMicAudience *_currentAudience;
    unsigned long long _state;
    UIView *_panelView;
    MMUIButton *_arrowButton;
    UITableView *_audienceTableView;
    NSArray *_displayAudienceArray;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
}

- (void).cxx_destruct;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *displayAudienceArray; // @synthesize displayAudienceArray=_displayAudienceArray;
@property(retain, nonatomic) UITableView *audienceTableView; // @synthesize audienceTableView=_audienceTableView;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) _Bool enableOperation; // @synthesize enableOperation=_enableOperation;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) MMLiveApplyConnectMicAudience *currentAudience; // @synthesize currentAudience=_currentAudience;
@property(retain, nonatomic) NSArray *audienceArray; // @synthesize audienceArray=_audienceArray;
@property(nonatomic) __weak id <MMLiveConnectMicOperationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handlePanelViewPanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)numberOfSectionsOfTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMMLiveConnectedMicAudienceCellViewCancelConnectMicFromAudience:(id)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewStopConnectMicFromAudience:(id)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewConnectMicToAudience:(id)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewEnableConnectMic:(_Bool)arg1;
- (void)closeAction;
- (void)updateCurrentAudience:(id)arg1 audienceArray:(id)arg2 andState:(unsigned long long)arg3;
- (void)showPanelWithInitialState:(unsigned long long)arg1 enableOperation:(_Bool)arg2;
- (void)updateDisplayAudienceArray;
- (void)updatePanelViews;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

