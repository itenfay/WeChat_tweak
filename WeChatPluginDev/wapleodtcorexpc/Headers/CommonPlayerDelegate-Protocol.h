//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol CommonPlayerDelegate <NSObject>

@optional
- (void)onCommonPlayerPlayAtTime:(double)arg1;
- (void)onCommonPlayerError:(NSDictionary *)arg1;
- (void)onCommonPlayerPause;
- (void)onCommonPlayerStop;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerPlay;
@end

