//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray;

@protocol SelectOpenIMContactsViewControllerDelegate <NSObject>
- (void)onSelectOpenIMContactReturn:(NSArray *)arg1;

@optional
- (void)onSelectOpenIMDidEndSearchWithDone:(_Bool)arg1 selectedCount:(unsigned long long)arg2 multiSelectedFlag:(_Bool)arg3;
- (_Bool)onShouldSelectOpenIMContact:(CContact *)arg1;
@end

