//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchPickerViewController, WCFinderSearchViewModel;

@protocol WCFinderSearchPickerViewControllerDelegate <NSObject>

@optional
- (void)finderSearchPickerViewController:(WCFinderSearchPickerViewController *)arg1 didSelectWithSearchModel:(WCFinderSearchViewModel *)arg2 index:(long long)arg3;
@end

