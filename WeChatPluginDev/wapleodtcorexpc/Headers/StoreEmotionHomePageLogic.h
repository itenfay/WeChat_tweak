//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface StoreEmotionHomePageLogic : NSObject
{
    unsigned long long _sessionId;
}

+ (id)cachePath;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void)setRecordListCache:(id)arg1;
- (id)recordListCache;
- (void)fetchHomePageWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

