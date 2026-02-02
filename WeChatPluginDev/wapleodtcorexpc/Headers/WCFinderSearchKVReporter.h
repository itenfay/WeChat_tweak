//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderSearchMetaData;

@interface WCFinderSearchKVReporter : NSObject
{
    WCFinderSearchMetaData *_metaData;
}

+ (void)setReqeustId:(id)arg1 forFeedVMS:(id)arg2;
+ (void)setReqeustId:(id)arg1 forFeedVM:(id)arg2;
+ (id)requestIdForFeedVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchMetaData *metaData; // @synthesize metaData=_metaData;
- (void)reportWithClickWithQueryText:(id)arg1 tid:(id)arg2 position:(long long)arg3 hotwordId:(id)arg4 requestId:(id)arg5 clickType:(_Bool)arg6;
- (void)reportSearchWithText:(id)arg1 requestId:(id)arg2 resultEmpty:(_Bool)arg3;

@end

