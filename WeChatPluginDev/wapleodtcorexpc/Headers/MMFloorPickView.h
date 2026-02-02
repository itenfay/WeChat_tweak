//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSIndexPath, NSString, QMapView, UITableView;

@interface MMFloorPickView : UIView
{
    NSArray *levels;
    NSString *buildingId;
    NSIndexPath *selectIndexPath;
    _Bool _needHidden;
    QMapView *_mapView;
    double _scaleLength;
    long long _reportShowCount;
    long long _reportTapCount;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long reportTapCount; // @synthesize reportTapCount=_reportTapCount;
@property(nonatomic) long long reportShowCount; // @synthesize reportShowCount=_reportShowCount;
@property(nonatomic) double scaleLength; // @synthesize scaleLength=_scaleLength;
@property(nonatomic) _Bool needHidden; // @synthesize needHidden=_needHidden;
@property(nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCurrentStatus;
- (void)changeActiveIndoorInfo:(id)arg1;
- (void)changeActiveBuilding:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

