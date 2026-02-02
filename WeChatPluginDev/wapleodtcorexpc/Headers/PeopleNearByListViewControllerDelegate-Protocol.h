//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLbsAdvertismentInfo;

@protocol PeopleNearByListViewControllerDelegate <NSObject>
- (void)onSelectAd:(MMLbsAdvertismentInfo *)arg1;
- (void)onCloseAd:(MMLbsAdvertismentInfo *)arg1;
@end

