//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BadRoomMgrExt <NSObject>

@optional
- (void)onDeleteSession:(NSString *)arg1 lastSequence:(unsigned int)arg2;
- (void)onSilenceNotify:(NSString *)arg1 msgSequence:(unsigned int)arg2;
@end

