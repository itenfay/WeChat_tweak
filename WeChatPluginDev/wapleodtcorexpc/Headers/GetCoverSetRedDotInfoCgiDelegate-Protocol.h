//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetCoverSetRedDotInfoResp, NSString;

@protocol GetCoverSetRedDotInfoCgiDelegate <NSObject>
- (void)onGetCoverSetRedDotInfoCgiResponse:(GetCoverSetRedDotInfoResp *)arg1;

@optional
- (void)onGetCoverSetRedDotInfoCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
@end

