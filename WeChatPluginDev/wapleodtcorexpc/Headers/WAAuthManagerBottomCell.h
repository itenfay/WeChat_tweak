//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIButton, WAAuthManagerBottomViewModel;

@interface WAAuthManagerBottomCell : UICollectionViewCell
{
    WAAuthManagerBottomViewModel *_viewDataModel;
    UIButton *_managerButton;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *managerButton; // @synthesize managerButton=_managerButton;
@property(retain, nonatomic) WAAuthManagerBottomViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

