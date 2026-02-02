//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSObject, NSString;

@interface WCTBaseSettingView : UIView
{
    NSObject *_viewDataModel;
    MMUILabel *_titleLabel;
    CDUnknownBlockType _viewEventAction;
    id _viewDelegate;
    UIView *_cell;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *cell; // @synthesize cell=_cell;
@property(nonatomic) __weak id viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSObject *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (void)loadUI:(id)arg1;
- (id)initWithCell:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

