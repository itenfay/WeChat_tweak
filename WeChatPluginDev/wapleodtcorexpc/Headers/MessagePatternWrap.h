//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MessagePatternWrap : NSObject
{
    NSMutableArray *m_arrPatternList;
    _Bool m_bChange;
    NSString *m_nsChatName;
    NSObject<OS_dispatch_queue> *m_worker;
}

+ (long long)getParserType:(id)arg1;
+ (_Bool)isBrandContactMsg:(id)arg1;
+ (id)GetPathOfPatternCacheWithPb:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property _Bool m_bChange; // @synthesize m_bChange;
@property(retain, nonatomic) NSMutableArray *m_arrPatternList; // @synthesize m_arrPatternList;
- (void)DelMsgPatten:(id)arg1;
- (void)DelMsg:(id)arg1;
- (void)SetPattern:(id)arg1;
- (id)GetPattern:(id)arg1;
- (void)RemoveFromFile;
- (void)SaveToFile;
- (void)doSaveToFile:(id)arg1 path:(id)arg2;
- (void)LoadFromFile;
- (void)dealloc;
- (id)initWithChatName:(id)arg1 andWorker:(id)arg2;

@end

