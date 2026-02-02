//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact;

@protocol IFTSContactDataProviderExt

@optional
- (void)onContactDeleted:(CContact *)arg1;
- (void)onContactReplaced:(CContact *)arg1;
- (void)onContactReload;
@end

