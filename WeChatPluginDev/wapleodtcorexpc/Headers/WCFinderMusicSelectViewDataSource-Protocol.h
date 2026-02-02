//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderMusicSelectViewData;

@protocol WCFinderMusicSelectViewDataSource <NSObject>
- (_Bool)isOSTMuted;
- (id <WCFinderMusicSelectViewData>)musicDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
@end

