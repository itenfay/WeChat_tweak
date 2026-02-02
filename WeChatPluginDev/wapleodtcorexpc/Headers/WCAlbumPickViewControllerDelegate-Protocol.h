//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderPostSessionModel;

@protocol WCAlbumPickViewControllerDelegate <NSObject>

@optional
- (void)onSelectionItemNumberChanged:(unsigned long long)arg1;
- (void)onSendMediaWith:(WCFinderPostSessionModel *)arg1;
- (void)onSendMediaList:(NSArray *)arg1;
- (void)onJumpCustomEditViewController:(NSArray *)arg1;
- (void)onQuit;
@end

