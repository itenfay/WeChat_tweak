//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, CMessageWrap, NSArray, NSIndexPath;

@protocol TemplateMsgSearchHelperDelegate <NSObject>
- (CBaseContact *)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarCancel;
- (void)msgSearchBarActive;

@optional
- (void)msgSearchDidDismiss;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1 indexPath:(NSIndexPath *)arg2 arrKeyword:(NSArray *)arg3;
@end

