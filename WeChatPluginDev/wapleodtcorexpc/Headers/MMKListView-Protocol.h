//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKListViewCallback, MMKListViewOnScrollCallback;
@protocol MMKView;

@protocol MMKListView <MMKView>
- (void)setOnScrollCallback:(MMKListViewOnScrollCallback *)arg1;
- (_Bool)getShowScrollBar;
- (void)setShowScrollBar:(_Bool)arg1;
- (_Bool)getVertical;
- (void)setVertical:(_Bool)arg1;
- (void)setImpl:(MMKListViewCallback *)arg1;
- (void)addFooter:(id <MMKView>)arg1;
- (void)addHeader:(id <MMKView>)arg1;
@end

