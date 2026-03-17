//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderCommentDetailViewModel;
@protocol WCFinderCommentDetailViewControllerDelegate;

@protocol WCFinderCommentBaseViewProtocol <NSObject>
@property(nonatomic) __weak id <WCFinderCommentDetailViewControllerDelegate> delegate;
- (unsigned long long)refCommentID;
- (_Bool)shouldStopPlayingVideo;
- (WCFinderCommentDetailViewModel *)viewmodelOfCommentVC;
- (_Bool)presentWithAnimation;
- (NSString *)tid;
- (void)enterShowKeyBoard;
- (_Bool)canUseCache;
- (unsigned long long)commentViewControllerShowType;

@optional
- (void)scrollToTop;
- (void)setCallFromDetail:(_Bool)arg1;
@end

