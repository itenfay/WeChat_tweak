//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact, NSArray, NSDictionary;

@protocol OpenIMContactSelectViewDelegate <MMUIViewControllerDelegate>
- (void)onSelectOpenIMContact:(CContact *)arg1;

@optional
- (void)onContactSelectSearchSections:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (_Bool)onShouldSelectOpenIMContact:(CContact *)arg1;
- (_Bool)onFilterOpenIMContactCandidate:(CContact *)arg1;
@end

