//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TAVPlayerControlPanelDelegate;

@protocol TAVPlayerControlPanel <NSObject>
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) CDStruct_1b6d18a9 progress;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic, getter=isDragging) _Bool dragging;
@property(nonatomic) __weak id <TAVPlayerControlPanelDelegate> delegate;

@optional
@property(nonatomic) double speed;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@end

