//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, ZZFlexibleLayoutSeperatorModel;

@interface ZZFlexibleLayoutSeperatorCell : UICollectionViewCell
{
    ZZFlexibleLayoutSeperatorModel *_model;
}

+ (struct CGSize)viewSizeByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZFlexibleLayoutSeperatorModel *model; // @synthesize model=_model;
- (void)setViewDataModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

