//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicPkSelectionModel;

@protocol MMFinderLiveConnectMicPkSelecting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType selectAction;
- (void)initiateSelection;
- (void)updateWithModel:(MMFinderLiveConnectMicPkSelectionModel *)arg1;
@end

