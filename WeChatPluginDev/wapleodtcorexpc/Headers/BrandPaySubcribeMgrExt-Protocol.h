//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@protocol BrandPaySubcribeMgrExt

@optional
- (void)onUpdateUserPaySubcribeEntry:(_Bool)arg1 entryUrl:(NSString *)arg2;
- (void)onBatchUpdateMPPagePaySubcribeHasPaid:(NSArray *)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(NSString *)arg1 fullUrl:(NSString *)arg2;
@end

