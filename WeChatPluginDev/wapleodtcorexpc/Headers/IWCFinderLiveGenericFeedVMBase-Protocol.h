//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderLiveStreamElementModel;
@protocol WCFinderLiveFeedGenericPageContextBase;

@protocol IWCFinderLiveGenericFeedVMBase <NSObject>
- (id)initWithModel:(WCFinderLiveStreamElementModel *)arg1 scene:(int)arg2 sessionExtraKey:(NSString *)arg3 containerId:(unsigned long long)arg4 ctx:(id <WCFinderLiveFeedGenericPageContextBase>)arg5;
@end

