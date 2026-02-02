//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LbsLifeData, NSString;

@protocol ILBSLifeMgrExt <NSObject>
- (void)OnAutoSearchLBSLife:(LbsLifeData *)arg1 Keyword:(NSString *)arg2 NextQueryInterval:(double)arg3 Error:(int)arg4 IsStartFromFirst:(_Bool)arg5;
- (void)OnSearchLBSLife:(LbsLifeData *)arg1 Keyword:(NSString *)arg2 Error:(int)arg3 IsStartFromFirst:(_Bool)arg4;
- (void)OnGetLBSLife:(LbsLifeData *)arg1 Error:(int)arg2 EventId:(unsigned int)arg3;
- (void)OnGetLBSLife:(LbsLifeData *)arg1 Error:(int)arg2;
@end

