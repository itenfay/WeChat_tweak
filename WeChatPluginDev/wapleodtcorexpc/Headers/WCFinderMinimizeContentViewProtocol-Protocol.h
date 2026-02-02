//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView, WCFinderFeedContentVM;
@protocol WCFinderMinimizeContentViewDelegate;

@protocol WCFinderMinimizeContentViewProtocol <NSObject>
- (void)keepHandlePlayer;
- (void)cleanUp;
- (void)beforeRestore;
- (struct CGSize)contentSize;
- (UIView *)animatingSnapView;
- (void)resumePlay;
- (void)pausePlay;

@optional
@property(retain, nonatomic) UIImage *tmpSnapCoverImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,&,N

- (void)onMinimizeFloatingViewDidDisplay;
- (double)playPosition;
- (NSString *)controlCenterDisplayTitle;
- (void)setDelegate:(id <WCFinderMinimizeContentViewDelegate>)arg1;
- (id <WCFinderMinimizeContentViewDelegate>)delegate;
- (_Bool)beTakeOverAudioModel;
- (_Bool)setMutePlay:(_Bool)arg1;
- (void)replaceCurContentVM:(WCFinderFeedContentVM *)arg1;
- (void)notifyPipAudioModuleActiveStateChanged:(_Bool)arg1;
- (void)hidePlayerViewIfNeeded:(_Bool)arg1;
@end

