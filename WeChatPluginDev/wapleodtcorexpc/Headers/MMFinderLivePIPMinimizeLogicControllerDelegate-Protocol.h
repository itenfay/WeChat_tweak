//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId, UIView;
@protocol MMFinderLivePIPMinimizeDisplayViewProtocol;

@protocol MMFinderLivePIPMinimizeLogicControllerDelegate <NSObject>
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) UIView<MMFinderLivePIPMinimizeDisplayViewProtocol> *pipMinimizeContentView;
- (void)notifyHideContentView;
- (void)notifyShowContentView;
@end

