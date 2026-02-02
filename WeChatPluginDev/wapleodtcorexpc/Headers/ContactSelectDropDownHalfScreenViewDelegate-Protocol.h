//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray;

@protocol ContactSelectDropDownHalfScreenViewDelegate <NSObject>
- (void)onDropDownHalfScreenViewContactDidHide:(NSArray *)arg1;
- (void)onDropDownHalfScreenViewContactDidSelected:(CContact *)arg1;
@end

