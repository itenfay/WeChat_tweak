//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, XMailCommitBindCgi;

@protocol XMailCommitBindCgiDelegate <NSObject>

@optional
- (void)onXMailCommitBindCgiSuccess:(XMailCommitBindCgi *)arg1 mailAddr:(NSString *)arg2;
@end

