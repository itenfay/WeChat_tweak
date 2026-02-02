//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface GCRoleInfoView : UIView
{
    UILabel *_roleTextLabel;
    MMWebImageView *_roleIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *roleIcon; // @synthesize roleIcon=_roleIcon;
@property(retain, nonatomic) UILabel *roleTextLabel; // @synthesize roleTextLabel=_roleTextLabel;
- (void)configWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

