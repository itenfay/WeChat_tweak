//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, MMUIViewController;

@protocol IntelligentMsgImgBrowseViewControllerDelegate <NSObject>

@optional
- (void)IntelligentMsgImgBrowseViewDidBePopedOrDismissed;
- (MMUIViewController *)getViewController;
- (void)onMsgImgClicked:(CMessageWrap *)arg1 WithOffset:(double)arg2;
@end

