//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, WCFinderComment, WCFinderContact, WCFinderFansProfileViewController;

@protocol WCFinderFansProfileViewControllerDelegate <NSObject>

@optional
- (void)doBusinessWithCompletion:(void (^)(void))arg1;
- (void)fansProfileViewController:(WCFinderFansProfileViewController *)arg1 clickFinderActionWithWXUsername:(NSString *)arg2;
- (void)fansProfileViewController:(WCFinderFansProfileViewController *)arg1 clickPrivateMsgWithContact:(CContact *)arg2 finderContact:(WCFinderContact *)arg3 comment:(WCFinderComment *)arg4;
- (void)wx_fansProfileViewController:(WCFinderFansProfileViewController *)arg1 clickActionWithFinderContact:(WCFinderContact *)arg2;
- (void)fansProfileViewController:(WCFinderFansProfileViewController *)arg1 clickControlWithContact:(CContact *)arg2 finderContact:(WCFinderContact *)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(WCFinderFansProfileViewController *)arg1 clickActionWithContact:(CContact *)arg2 finderContact:(WCFinderContact *)arg3 type:(unsigned long long)arg4;
@end

