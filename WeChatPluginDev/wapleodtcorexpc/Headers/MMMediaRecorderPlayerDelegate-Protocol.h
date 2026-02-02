//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, UINavigationController;

@protocol MMMediaRecorderPlayerDelegate <NSObject>

@optional
- (CMessageWrap *)getMessageWrap;
- (void)onDirect:(UINavigationController *)arg1;
- (void)onForward;
- (void)onEndPlayer;
- (void)onClosePlayer;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onCreate;
@end

