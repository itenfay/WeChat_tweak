//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCSearcher;

@protocol ContactTagSearchPanelDelegate <NSObject>
- (NSArray *)getCurrentSelectedTagsName;
- (NSArray *)getAllTags;

@optional
- (void)contactTagSearchPanelDidDismissSearch:(WCSearcher *)arg1;
- (void)contactTagSearchPanelDidSelectTags:(NSArray *)arg1;
- (void)contactTagSearchPanelDidSelectTag:(NSString *)arg1;
@end

