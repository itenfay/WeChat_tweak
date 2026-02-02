//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol AudioDataRead <NSObject>
- (_Bool)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned int)getLength;
@end

