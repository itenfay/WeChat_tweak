//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol StorageFootPanelViewDelegate <NSObject>
- (_Bool)isFootPanelRelateDataSelectEmpty;
- (_Bool)isFootPanelRelateDataLoading;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectButtonClick;
- (NSString *)getFootPanelSizeText;
- (NSString *)getFootPanelLabelText;
- (NSString *)getFootPanelDeletebuttonTitle;
- (NSString *)getFootPanelSelectButtonTitle;
@end

