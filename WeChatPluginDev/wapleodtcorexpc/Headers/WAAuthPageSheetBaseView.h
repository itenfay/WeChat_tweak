//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WAAuthPageSheetViewModel;

@interface WAAuthPageSheetBaseView : UICollectionViewCell
{
    WAAuthPageSheetViewModel *_viewDataModel;
}

+ (double)edgeLR;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthPageSheetViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

