//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCoverAddTextResult, WCFinderCoverPreviewModel;

@protocol WCFinderCoverBasePreviewViewDelegate <NSObject>
- (WCFinderCoverAddTextResult *)getCoverEditImageResult;
- (WCFinderCoverPreviewModel *)getCurSelectCoverPreviewModel;
@end

