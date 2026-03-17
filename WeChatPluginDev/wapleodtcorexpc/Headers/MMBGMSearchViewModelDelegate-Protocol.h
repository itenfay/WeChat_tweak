//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSearchViewModel, NSString;

@protocol MMBGMSearchViewModelDelegate <NSObject>

@optional
- (void)onBgmSearchViewModel:(MMBGMSearchViewModel *)arg1 didSearchWithKey:(NSString *)arg2;
- (void)onBgmSearchViewModelDataChange:(MMBGMSearchViewModel *)arg1;
@end

