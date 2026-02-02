//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, POITapGestureRecognizer, UIButton, UITableView, UIView;
@protocol POITableViewCellDelegate;

@interface POITableViewCell
{
    id <POITableViewCellDelegate> _actionDelegate;
    UITableView *_myTableView;
    NSIndexPath *_myIndexPath;
    UIView *_mySelectedBackgroundView;
    UIButton *_selectedButt;
    POITapGestureRecognizer *_recognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) POITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) UIButton *selectedButt; // @synthesize selectedButt=_selectedButt;
@property(retain, nonatomic) UIView *mySelectedBackgroundView; // @synthesize mySelectedBackgroundView=_mySelectedBackgroundView;
@property(retain, nonatomic) NSIndexPath *myIndexPath; // @synthesize myIndexPath=_myIndexPath;
@property(nonatomic) __weak UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) __weak id <POITableViewCellDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setMySelectedBackgroundViewDisplay;
- (void)handleTableViewCellTapGesture:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

