//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol SelectContactsViewControllerDelegate <NSObject>
- (void)onSelectContactReturn:(CContact *)arg1 atScene:(unsigned int)arg2;

@optional
- (void)onExistContactDidSelected:(CContact *)arg1;
- (_Bool)hideFavourContactCandidate;
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (void)onSelectContactCancel;
@end

