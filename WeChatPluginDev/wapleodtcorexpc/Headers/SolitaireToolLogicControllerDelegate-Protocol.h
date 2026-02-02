//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol SolitaireToolLogicControllerDelegate <NSObject>
- (NSString *)getChatName;
- (MMUIViewController *)getViewController;
- (void)onGetResult:(NSString *)arg1 FromToolType:(unsigned int)arg2;
@end

