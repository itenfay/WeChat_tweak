//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCSightFullPlayViewControllerDelegate <NSObject>

@optional
- (NSString *)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressFullPlayView;
- (void)onClickFullPlayView;
@end

