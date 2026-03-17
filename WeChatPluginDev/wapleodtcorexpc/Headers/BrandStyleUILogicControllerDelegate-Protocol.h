//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandContentLogicController;

@protocol BrandStyleUILogicControllerDelegate <NSObject>
- (void)updateToolViewStatus;
- (BrandContentLogicController *)getLogicController;

@optional
- (void)reportInputToolBarModeChanged:(unsigned int)arg1;
- (void)disconnectDevice;
- (void)connectDevice;
@end

