//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MTLRenderPassDescriptor;

@protocol TXCMetalRenderTarget <NSObject>
- (MTLRenderPassDescriptor *)renderPassDescriptor;
- (unsigned long long)type;
@end

