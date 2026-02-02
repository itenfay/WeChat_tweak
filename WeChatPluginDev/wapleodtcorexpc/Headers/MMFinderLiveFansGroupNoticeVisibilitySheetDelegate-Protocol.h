//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveFansGroupAnchorEditFansNoticeInfo, MMFinderLiveFansGroupNoticeVisibilitySheet;

@protocol MMFinderLiveFansGroupNoticeVisibilitySheetDelegate <NSObject>
- (void)noticeVisibilitySheetDidConfirm:(MMFinderLiveFansGroupNoticeVisibilitySheet *)arg1 newInfo:(MMFinderLiveFansGroupAnchorEditFansNoticeInfo *)arg2;
- (void)noticeVisibilitySheetWillDisappear:(MMFinderLiveFansGroupNoticeVisibilitySheet *)arg1;
@end

