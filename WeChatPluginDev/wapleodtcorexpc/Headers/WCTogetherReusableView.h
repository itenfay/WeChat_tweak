//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@interface WCTogetherReusableView : UITableViewHeaderFooterView
{
    id _viewSection;
}

+ (double)heightForViewSection:(id)arg1 inTableView:(id)arg2;
+ (id)reusableViewIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id viewSection; // @synthesize viewSection=_viewSection;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAllValues;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;
- (void)_observedValueDidChangeForKeyPath:(id)arg1;
- (void)_unobserveViewModel:(id)arg1;
- (void)_observeViewModel:(id)arg1;

@end

