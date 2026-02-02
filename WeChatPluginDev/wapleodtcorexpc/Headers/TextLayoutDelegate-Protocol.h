//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TextLayoutDelegate <NSObject>
- (unsigned int)perferedLinkTextVisiableLength;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 lineHeight:(double)arg3;
- (double)originXForLineAtHeight:(double)arg1;
@end

