//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGenericPickerItem, MMFinderLiveGenericPickerView;

@protocol MMFinderLiveGenericPickerViewDelegate <NSObject>
- (void)livePickerView:(MMFinderLiveGenericPickerView *)arg1 didSelectItem:(MMFinderLiveGenericPickerItem *)arg2 index:(unsigned long long)arg3;
@end

