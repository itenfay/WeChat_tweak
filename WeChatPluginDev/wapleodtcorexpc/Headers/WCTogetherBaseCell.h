//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@interface WCTogetherBaseCell : UITableViewCell
{
    id _viewItem;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id viewItem; // @synthesize viewItem=_viewItem;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didSetNewViewModel:(id)arg1;
- (void)_willUnsetOldViewModel:(id)arg1;
- (void)updateAllValues;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;
- (void)_observedValueDidChangeForKeyPath:(id)arg1;
- (void)_unobserveViewModel:(id)arg1;
- (void)_observeViewModel:(id)arg1;

@end

