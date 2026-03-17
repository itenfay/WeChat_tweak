//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileItemBaseViewModel, CContact, NSMutableDictionary, NSString, UIScrollView;

@protocol BrandProfileBaseTabViewControllerDelegate <NSObject>
- (void)openWebView:(NSString *)arg1 extraInfo:(NSMutableDictionary *)arg2 hasItemShowType:(_Bool)arg3 itemShowType:(unsigned int)arg4 fromFeature:(_Bool)arg5;
- (void)subTableViewDidScroll:(UIScrollView *)arg1;
- (unsigned int)getPageMode;
- (NSString *)getSearchClickId;
- (unsigned int)getBrandMPPageEnterReportScene;
- (CContact *)getBrandContact;

@optional
- (void)showLiveRoomWithViewModel:(BrandProfileItemBaseViewModel *)arg1;
@end

