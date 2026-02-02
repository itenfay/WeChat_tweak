//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ContactTagListBottomBarDelegate <NSObject>

@optional
- (void)onContactTagListBottomBarDelete;
- (void)onContactTagListBottomBarMoveTo;
- (void)onContactTagListBottomBarEditTags;
- (void)onContactTagListBottomBarCreateTag;
@end

