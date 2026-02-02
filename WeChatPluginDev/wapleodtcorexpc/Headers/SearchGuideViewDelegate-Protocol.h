//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SearchGuideViewDelegate <NSObject>

@optional
- (void)updateLocation;
- (void)hideKeyboard;
- (void)startCommonSearch:(NSString *)arg1;
@end

