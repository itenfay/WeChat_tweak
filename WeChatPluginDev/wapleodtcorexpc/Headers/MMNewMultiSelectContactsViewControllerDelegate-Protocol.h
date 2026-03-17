//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, UIView;

@protocol MMNewMultiSelectContactsViewControllerDelegate <NSObject>

@optional
- (void)onSingleSelectContactDidFinishSelect:(CContact *)arg1;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1 tmpDisplayView:(UIView *)arg2;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1;
@end

