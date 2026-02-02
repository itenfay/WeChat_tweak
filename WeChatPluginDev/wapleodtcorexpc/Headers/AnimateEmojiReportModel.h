//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AnimateEmojiReportModel : NSObject
{
    _Bool _isRecentUse;
    NSString *_key;
}

+ (void)doReport:(id)arg1 node:(id)arg2 playSuccess:(_Bool)arg3 failedReason:(unsigned long long)arg4;
+ (void)endSession;
+ (void)beginSession:(id)arg1 isRecentUse:(_Bool)arg2;
+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRecentUse; // @synthesize isRecentUse=_isRecentUse;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

