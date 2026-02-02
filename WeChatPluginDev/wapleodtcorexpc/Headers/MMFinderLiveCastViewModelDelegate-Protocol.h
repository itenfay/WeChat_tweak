//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCastViewModel, MMLiveCastDeviceViewItem, NSError;

@protocol MMFinderLiveCastViewModelDelegate <NSObject>

@optional
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 castingDeviceViewItemDidChange:(MMLiveCastDeviceViewItem *)arg2;
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 didFailToCastDeviceViewItem:(MMLiveCastDeviceViewItem *)arg2 withError:(NSError *)arg3;
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 didCastDeviceViewItem:(MMLiveCastDeviceViewItem *)arg2;
- (void)liveCastViewModelDidReloadViewItems:(MMFinderLiveCastViewModel *)arg1;
@end

