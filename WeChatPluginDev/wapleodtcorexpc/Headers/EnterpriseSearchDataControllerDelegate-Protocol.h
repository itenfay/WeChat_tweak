//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol EnterpriseSearchDataControllerDelegate <NSObject>

@optional
- (_Bool)shouldProcessRemoteSearchResp:(NSString *)arg1 range:(unsigned int)arg2;
- (void)onRemoteSearchMoreCompleted:(NSString *)arg1 range:(unsigned int)arg2 result:(NSDictionary *)arg3;
@end

